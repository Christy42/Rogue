#include <iostream>
#include <time.h>
#include <stdlib.h>     /* srand, rand */

#include "character.h"

using namespace std;


int main(){
	srand (time(NULL));
	Character orc;
	Character black_orc(200, 200, 200, 200, 200);
	orc.print_stats();
	black_orc.print_stats();
	cout<<rand()%100<<endl;
	return 0;
}

