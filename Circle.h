#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>

using namespace std;

class Circle {
public:
	Circle();
	Circle(double);

	double getArea();
	double getRadius() const;
	void setRadius(double);

	Circle add(const Circle& secondCircle) const;

	friend ostream& operator<<(ostream&, const Circle&);


private:
	double radius;
};

//define nonmember function operators for arithmetic operators
Circle operator+(const Circle& c1, const Circle& c2);

#endif //CIRCLE_H

