#include <iostream>
#include <time.h>
#include <stdlib.h>     /* srand, rand */
#include <memory>

#include "enemy.h"

using namespace std;


int main(){
	srand (time(NULL));
	//Tiefling* orc = new Tiefling;
    unique_ptr<Tiefling> orc (new Tiefling);
	Character* black_orc = new Character;
	int b = orc->attack();
	black_orc->print_stats();
	int damage;
	cout<<b<<endl;
	cout<<rand()%100<<endl;
	orc->print_stats();
	/*while(black_orc.get_health() > 0 && orc->get_health() > 0){
		cout<<"Start Health "<<orc->get_health()<<"  "<<black_orc.get_health()<<endl;
		damage = orc->attack();
		black_orc.hit(damage, orc->get_strength());
		damage = black_orc.attack();
		orc->hit(damage, black_orc.get_strength());
		cout<<"Health "<<orc->get_health()<<"  "<<black_orc.get_health()<<endl;
	}*/
	/*if(black_orc.get_health() < 0){
    delete black_orc;
	}*/
	/*if(orc->get_health() < 0){
		delete orc;
	}*/
	return 0;
}

