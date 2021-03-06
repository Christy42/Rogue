#include <iostream>
#include <stdlib.h>     /* srand, rand */

#include "character.h"

using namespace std;


Character::Character(){
	health = rand() % 90 + 10;
	skill = rand() % 90 + 10;
	speed = rand() % 90 + 10;
	defense = rand() % 90 + 10;
	strength = rand() % 91 + 10;
}

Character::Character(int health_stat, int speed_stat, int strength_stat, int skill_stat, int defense_stat){
	health = health_stat;
	skill = skill_stat;
	speed = strength_stat;
	defense = defense_stat;
	strength = strength_stat;
}

void Character::print_stats()
{
	cout<<"health "<<health<<endl<<"skill "<<skill<<endl;
}
