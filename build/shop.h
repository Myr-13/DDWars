#pragma once

#include <game/server/entities/character.h>

class CShopNPC
{
	CCharacter *m_pCharacter;

	enum
	{
		DIRECTION_LEFT = -1,
		DIRECTION_NONE = 0,
		DIRECTION_RIGHT = 1
	};

	void Aim(vec2 pos);

public:
	CShopNPC(CCharacter *chr);

	virtual void Tick();
};
