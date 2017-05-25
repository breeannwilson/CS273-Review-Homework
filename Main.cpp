#include <iostream>
#include "Circle.h"

using namespace std;

void main() {

	Circle myCircle1;
	Circle myCircle2(10);

	//declare pointer variable to Circle object and allocate memory for it using the 
	//overloaded constructor to initialize its radius to "12"
	Circle* pCircle;
	pCircle = new Circle();
	*pCircle = Circle(12);

	//declare an array of 10 Circle objects using the default constructor
	Circle circle[10];

	//assigns the radius of every Circle object in the array to "15"
	for (int i = 0; i < 10; i++) {
		circle[i].setRadius(15);
		cout << "The Radius of circle " << i << " is " << circle[i].getRadius() << endl;
	}

	system("pause");

}