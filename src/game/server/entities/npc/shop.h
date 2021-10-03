#pragma once

#include <game/server/entities/character.h>

class CShopNPC
{
	CCharacter *m_pCharacter;
	CGameContext *m_pGameServer;
	CPlayer *m_pPlayer;

	enum
	{
		DIRECTION_LEFT = -1,
		DIRECTION_NONE = 0,
		DIRECTION_RIGHT = 1
	};

	void Aim(vec2 pos);

	int64 time = time_get();

public:
	CShopNPC(CCharacter *chr, CGameContext *srv, CPlayer *ply);

	void Tick();
};
