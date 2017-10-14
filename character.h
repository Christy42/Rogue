

class Character
{
    public:
	    Character();
	    Character(int health_stat, int speed_stat, int strength_stat, int skill_stat, int defense_stat);
	    void print_stats();
	private:
	    int health;
		int speed;
		int strength;
		int skill;	
		int defense;
};
