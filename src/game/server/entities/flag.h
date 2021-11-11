#ifndef GAME_SERVER_ENTITIES_FLAG_H
#define GAME_SERVER_ENTITIES_FLAG_H

#include <game/server/entity.h>

class CFlag : public CEntity
{
public:
	CFlag(CGameWorld *pGameWorld, int owner);

	int m_OwnerID;

	virtual void Reset();
	virtual void Snap(int SnappingClient);
	virtual void TickDefered();
};

#endif
