#include <iostream>
#include "Pointers.h"

using std::cout;
using std::endl;
using std::cin;

/*
	Tutorial 1

	- What are pointers?
	- Address-of operator (&)
	- Dereference operator (*)
	- Why use pointers?
		- return multiple values from a function
*/

namespace pointers {

	int getMin(int numbers[], int size) {
		int min = numbers[0];

		for (int i = 1; i < size; i++) {
			if (min > numbers[i])
				min = numbers[i];
		}

		return min;
	}

	int getMax(int numbers[], int size) {
		int max = numbers[0];

		for (int i = 1; i < size; i++) {
			if (max < numbers[i])
				max = numbers[i];
		}

		return max;
	}

	void getMinAndMax(int numbers[], int size, int* min, int* max) {
		*min = numbers[0];
		*max = numbers[0];

		for (int i = 1; i < size; i++) {
			if (*min > numbers[i])
				*min = numbers[i];
			if (*max < numbers[i])
				*max = numbers[i];
		}
	}

	int main(int argc, char* argv[]) {
		
		int val = 5;
		cout <<  val << endl; // value
		cout << &val << endl; // address-of. get the memory address

		
		int* ptr = &val;      // referencing
		cout <<  ptr << endl; // memory address
		cout << *ptr << endl; // dereferencing. get the value

		*ptr = 10;
		cout << *ptr << endl;
		cout << val << endl;

		int* ptr2;
		// *ptr2 = 10;            <- compilation error! the ptr2 pointer is not initialized/referenced
		// cout << ptr2 << endl;  
		// cout << *ptr2 << endl;  

		int v;
		ptr2 = &v;
		cout << ptr2 << endl;
		*ptr2 = 15;
		cout << *ptr2 << endl;

		// Why use pointers?


		// 1. return multiple values from a function
		int numbers[5] = { 5, 4, -2, 26, 3 };
		cout << "Min is " << getMin(numbers, 5) << endl;
		cout << "Max is " << getMax(numbers, 5) << endl;

		int min, max;
		getMinAndMax(numbers, 5, &min, &max);
		cout << "Min is " << min << endl;
		cout << "Max is " << max << endl;

		return 0;
	}

}