#include <iostream>
#include <time.h>
#include <stdlib.h>     /* srand, rand */
#include <memory>
#include <string>

#include "enemy.h"

using namespace std;

template <class T, class T2>
void full_attack(T attacker, T2 defender) {
  int damage = attacker->attack();
  defender->hit(damage, attacker->get_strength());
}


int main(){
	srand (time(NULL));
	//Tiefling* orc = new Tiefling;
    shared_ptr<Tiefling> orc (new Tiefling);
    shared_ptr<Character> black_orc (new Character(100, 100, 100, 100, 100, "Ironhide"));
	black_orc->print_stats();
	int damage;
	cout<<rand()%100<<endl;
	orc->print_stats();
	while(black_orc->get_health() > 0 && orc->get_health() > 0){
		cout<<"Start Health "<<orc->get_health()<<"  "<<black_orc->get_health()<<endl;
		full_attack <shared_ptr<Tiefling>, shared_ptr<Character>>(orc, black_orc);
		full_attack <shared_ptr<Character>, shared_ptr<Tiefling>>(black_orc, orc);
		cout<<"Health "<<orc->get_health()<<"  "<<black_orc->get_health()<<endl;
	}
	return 0;
}

