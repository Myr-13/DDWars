#pragma once

#include <game/server/entities/character.h>

class CShopNPC
{
	CCharacter *m_pCharacter;

public:
	CShopNPC(CCharacter *chr);

	virtual void Tick();
};
