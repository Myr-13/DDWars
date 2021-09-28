#include "shop.h"

CShopNPC::CShopNPC(CCharacter *chr)
{
	m_pCharacter = chr;
}

void CShopNPC::Aim(vec2 pos) {
	m_pCharacter->Input()->m_TargetX = pos.x;
	m_pCharacter->Input()->m_TargetY = pos.y;
}

void CShopNPC::Tick() {
	vec2 pos = m_pCharacter->Core()->m_Pos;

	Aim(m_pCharacter->GameWorld()->ClosestCharacter(pos, 1000, m_pCharacter)->Core()->m_Pos);
}
