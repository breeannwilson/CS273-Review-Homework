#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

//default name is Albert
Animal::Animal() {
	name = "Albert";
}

string Animal::getName() {
	return name;
}