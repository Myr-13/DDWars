struct Account
{
	// Upgrades
	int max_hp; // 0
	int max_armor; // 1
	int damage; // 2
	int fire_speed; // 3
	int hack_speed; // 4
	int regen; // 5

	// Donate weapons
	bool RPG; // 6
	bool Minigun; // 7

	// Spawn weapons
	bool Grenade; // 8
	bool Shotgun; // 9
	bool Jetpack; // 10
	bool Dash; // 11

	// Stats
	int kills; // 12
	int money; // 13
	int lvl; // 14
	int xp; // 15
	int xp_to_lvl; // 16
	int tokens; // 17

	// Base
	char name[64]; // 18
	char password[64]; // 19

	bool isInit = false;

	Account(const char *pName, const char *pPassword) {
		damage = 1;
		Dash = 0;
		fire_speed = 1;
		Grenade = 0;
		hack_speed = 1;
		Jetpack = 0;
		kills = 0;
		lvl = 1;
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
