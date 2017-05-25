#ifndef CAT_H
#define CAT_H
#include "Animal.h"
#include "Mouth.h"
#include <iostream>

using namespace std;

class Cat : public Animal {
public:
	//class Cat has an object of class Mouth called "m"
	Mouth m;
};


#endif //CAT_H
