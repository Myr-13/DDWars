#include "shop.h"

CShopNPC::CShopNPC(CCharacter *chr, CGameContext *srv, CPlayer *ply)
{
	m_pCharacter = chr;
	m_pGameServer = srv;
	m_pPlayer = ply;
}

void CShopNPC::Aim(vec2 pos) {
	m_pCharacter->Input()->m_TargetX = pos.x;
	m_pCharacter->Input()->m_TargetY = pos.y;

	m_pCharacter->LatestInput()->m_TargetX = pos.x;
	m_pCharacter->LatestInput()->m_TargetY = pos.y;
}

void CShopNPC::Tick() {
	vec2 pos = m_pCharacter->Core()->m_Pos;

	CCollision *col = m_pGameServer->Collision();

	if((col->GetTileIndex(col->GetPureMapIndex(pos.x, pos.y)) != 177) && (time / 10000000 - time_get() / 10000000 <= -2))
	{
		time = time_get();

		m_pCharacter->Core()->m_Pos = vec2(548 * 32, 168 * 32);
	}

	return;
}
