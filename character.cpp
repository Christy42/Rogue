#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <string>

#include "character.h"

using namespace std;


Character::Character(){
	health = rand() % 90 + 10;
	skill = rand() % 90 + 10;
	speed = rand() % 90 + 10;
	defense = rand() % 90 + 10;
	strength = rand() % 90 + 10;
	name = "jasldkfj";
}

Character::Character(int health_stat, int speed_stat, int strength_stat, int skill_stat, int defense_stat, string name_stat){
	health = health_stat;
	skill = skill_stat;
	speed = strength_stat;
	defense = defense_stat;
	strength = strength_stat;
	name = name_stat;
}

Character::~Character(){
	if(health < 0){
		cout<<name<<" has died"<<endl;
	}
}


Character::~Character(){
	if(health < 0){
	    cout<<name<<" is dead"<<endl;
    }
}

void Character::print_stats()
{
	cout<<"health "<<health<<endl<<"skill "<<skill<<endl;
}

int Character::attack()
{
	return int((rand()%1000 + skill ) / 10);
}

void Character::hit(int damage, int str)
{
	cout<<"begin damage"<<endl;
	cout<<damage<<endl;
	for(int i=0; i<defense - strength; i++) {
		damage -= rand() % 2;
	}
	cout<<damage<<endl;
	health -= damage;
}
