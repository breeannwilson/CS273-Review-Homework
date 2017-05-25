#include <iostream>
#include <string>

using namespace std;

//EX 1.10 - write the code for a function that doubles the size of the 
int* doublecapacity(int *list, int size) {
	//makes temp double the size of "size"
	int *temp = new int[size * 2];
	//copies the data in list to the spots in temp
	for (int i = 0; i < size; i++) {
		temp[i] = list[i];
	}
	return temp;
}

void main() {

//EX 1.01 - Write the declaration for a pointer variable that can store the 
//address of a double variable
	//declare the pointer "pVariable" that points to a double
	double* pVariable;

//EX 1.02 - use the new operator to dynamically allocate memory for a double variable.
//store the address of this newly allocated double in the pointer variable declared indoubl 1.1
	pVariable = new double();

//EX 1.03 - assign the double value 4.12 to the memory for the double variable allocated in 1.2.
//use the * operator and the pointer variable that holds the address of the double
	*pVariable = 4.12;

//EX 1.04 - release the memory that was allocated using the new operator
	delete pVariable;

//EX 1.05 - What is wrong with the following code?
//char *variable;
//variable = 3;
	//variable is a pointer to a char, but then is trying to set it to an int
	//must dynamically allocate memory to assign an int to the memory for variable
	//Here is some code that would work!:
	int* variable;
	variable = new int();
	*variable = 3;
	//or pointer to a char instead of an int
	char* pvariable;
	pvariable = new char();
	*pvariable = 'x';

//EX 1.06 - What operator would you use to obtain the memory address of "myVar"?
	int myVar;
	int* pmyVar = &myVar;

//EX 1.07 - Declare and allocate an array of 10 int elements using dynamic memory allocation
	int* list = new int[10];

//EX 1.08 - write a loop that assigns int value of 42 to every element in the array allocated
//in 1.07, using pointer arithmetic to advance and access each element (dont use array notation)
	for (int i = 0; i < 10; i++) {
		*(list + i) = 42;
	}

//EX 1.09 - release the memory allocated in the array in 1.8 back to the operator system
	delete list;

//EX 1.10 - write the code for a function that doubles the size of the array passed into it
	//int* doublecapacity(int *list, int size);
	//to test the double capacity function
	list = new int[15];
	for (int i = 0; i < 15; i++)
		list[i] = i * 5;

	int*tmp = doublecapacity(list, 15);
	for (int i = 0; i < 15; i++)
		cout << tmp[i];

	system("pause");
}