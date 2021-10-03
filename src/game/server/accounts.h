struct Account
{
	// Upgrades
	int max_hp;
	int max_armor;
	int damage;
	int fire_speed;
	int hack_speed;
	int regen;

	// Donate weapons
	bool RPG;
	bool Minigun;

	// Spawn weapons
	bool Grenade;
	bool Shotgun;
	bool Jetpack;
	bool Dash;

	// Stats
	int kills;
	int money;
	int lvl;
	int xp;
	int xp_to_lvl;
	int tokens;

	// Base
	char name[64];
	char password[64];

	bool isInit = false;

	Account(const char *pName, const char *pPassword) {
		damage = 1;
		Dash = 0;
		fire_speed = 1;
		Grenade = 0;
		hack_speed = 1;
		Jetpack = 0;
		kills = 0;
		lvl = 0;
		max_armor = 10;
		max_hp = 10;
		Minigun = 0;
		money = 10000;
		str_copy(name, pName, 64);
		str_copy(password, pPassword, 64);
		regen = 0;
		RPG = 0;
		Shotgun = 0;
		tokens = 0;
		xp = 0;
		xp_to_lvl = 2500;

		isInit = true;
	}
};

enum
{
	ACC_VAR_MAX_HEALTH,
	ACC_VAR_MAX_ARMOR,
	ACC_VAR_DAMAGE,
	ACC_VAR_FIRE_SPEED,
	ACC_VAR_HACK_SPEED,
	ACC_VAR_REGEN,

	ACC_VAR_RPG,
	ACC_VAR_MINIGUN,

	ACC_VAR_GRENADE_SPAWN,
	ACC_VAR_SHOTGUN_SPAWN,
	ACC_VAR_JETPACK_SPAWN,
	ACC_VAR_DASH,

	ACC_VAR_KILLS,
	ACC_VAR_MONEY,
	ACC_VAR_LEVEL,
	ACC_VAR_XP,
	ACC_VAR_XP_TO_LEVEL,
	ACC_VAR_TOKENS,

	ACC_VAR_USERNAME,
	ACC_VAR_PASSWORD,
};
