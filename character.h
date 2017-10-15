class Character
{
    public:
	    Character();
	    Character(int health_stat, int speed_stat, int strength_stat, int skill_stat, int defense_stat);
	    void print_stats();
	    int get_health(){return health;}
	    int get_strength(){return strength;}
	    ~Character();
	private:
	    int health;
		int speed;
		int strength;
		int skill;	
		int defense;
};
