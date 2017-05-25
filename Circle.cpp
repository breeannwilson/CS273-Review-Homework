#include "Circle.h"
#include <iostream>

using namespace std;

Circle::Circle() {
	radius = 0;
}

Circle::Circle(double newRadius) {
	radius = newRadius;
}

double Circle::getArea() {
	return radius * radius * 3.14159;
}

double Circle::getRadius() const {
	return radius;
}

void Circle::setRadius(double newRadius) {
	radius = newRadius;
}

ostream& operator<<(ostream& out, const Circle& circle) {
	out << circle.getRadius();
	return out;
}

Circle Circle::add(const Circle& secondCircle) const {
	int z = radius + secondCircle.getRadius();
	return Circle(z);
}

Circle operator+(const Circle& c1, const Circle& c2) {
	return c1.add(c2);
}