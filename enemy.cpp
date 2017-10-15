#include <iostream>
#include <stdlib.h>

#include "enemy.h"

using namespace std;


int Tiefling::attack()
{
	return int((rand()%3000) / 25);
}
