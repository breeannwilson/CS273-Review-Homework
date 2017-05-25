#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void Swap(T & A, T & B) {
	T tmp = A;
	A = B;
	B = tmp;
}

template<typename T>
class myVec {
private:
	T *array;

public:
	//default size
	myVec() {
		int size = 0;
	}
	myVec(int size) {
		array = new T[size];
	}

	~myVec() {
		delete[] array;
	}
};



void main() {

	//declare object of myVec Class to hold array of double data types
	myVec<double> v1;

	//declare STL vector object for storing elements of char data type
	vector<char> v2;

	//for loop to assign "b" to every element in v2
	for (unsigned i = 0; i < v2.size(); i++) {
		v2[i] = 'b';
	}

	//what STL vector method do you use to get current size of the vector?
	cout << "The size of vector v2 is: " << v2.size() << endl;

	system("pause");

}