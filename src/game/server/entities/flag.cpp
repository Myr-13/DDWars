#include <game/server/gamecontext.h>
#include <game/server/gamecontroller.h>

#include "character.h"
#include "flag.h"

#include <math.h>

CFlag::CFlag(CGameWorld *pGameWorld, int owner) :
	CEntity(pGameWorld, CGameWorld::ENTTYPE_FLAG)
{
	m_OwnerID = owner;

	Reset();
}

void CFlag::Reset()
{
	m_Pos = vec2(0, 0);
}

void CFlag::TickDefered()
{
	if(!GameServer()->GetPlayerChar(m_OwnerID))
		return;

	m_Pos = GameServer()->GetPlayerChar(m_OwnerID)->Core()->m_Pos;

	m_Pos.x += 100 * cos(Server()->Tick() * pi / 90);
	m_Pos.y += 100 * sin(Server()->Tick() * pi / 90);
}

void CFlag::Snap(int SnappingClient)
{
	if(NetworkClipped(SnappingClient))
		return;

	CNetObj_Flag *pFlag = (CNetObj_Flag *)Server()->SnapNewItem(NETOBJTYPE_FLAG, TEAM_BLUE, sizeof(CNetObj_Flag));
	if(!pFlag)
		return;

	pFlag->m_X = round_to_int(m_Pos.x);
	pFlag->m_Y = round_to_int(m_Pos.y);
	pFlag->m_Team = TEAM_BLUE;
}
