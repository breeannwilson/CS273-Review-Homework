#include <iostream>
#include "Circle.h"
#include "Animal.h"
#include "Cat.h"
#include "Mouth.h"

using namespace std;


void main() {

	//When class A inherits class B, class A also inherits all public methods and 
	//variables in class B?
	//ANSWER: true

	//When class A inherits class B, can the private member variables of class B
	//be accessed in class A?
	//ANSWER: yes - if the private variable has a get function in public

	//create a Cat object
	Cat c;
	cout << "The name of Cat is: " << c.getName() << endl;
	cout << "This cat has " << c.m.getTeeth() << " teeth." << endl;

	//declare two Circle objects from the Circle class
	//circle c1 has radius 3
	Circle c1(3);
	//circle c2 has radius 5
	Circle c2(5);

	//create circle object with the combined radii of c1 and c2
	cout << "c1 + c2 = " << (c1 + c2) << endl;
	system("pause");
}