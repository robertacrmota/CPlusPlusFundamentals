#include <iostream>
#include "Pointers.h"

using std::cout;
using std::endl;
using std::cin;

/*
	Tutorial

	- What are pointers?
	- Address-of operator (&)
	- Dereferencing operator (*)
	- Why use pointers?
		1. return multiple values from a function
		2. use arrays
		3. use dynamic arrays
		4. use multi-dimensional arrays
		5. function pointers (next tutorial)
*/

namespace pointer {

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
		

		// Addressof (&) and dereferencing (*) operators --------------------------------------------------------------------
		int val = 5;
		cout <<  val << endl; // value
		cout << &val << endl; // address-of operator (&). get the memory address

		
		int* ptr = &val;      // referencing
		cout <<  ptr << endl; // memory address
		cout << *ptr << endl; // dereferencing operator (*). get the value

		*ptr = 10;
		cout << *ptr << endl;
		cout << val << endl;

		int* ptr2;
		// *ptr2 = 10;                      <- compilation error! the ptr2 pointer is not initialized/referenced
		// cout << ptr2 << endl;  
		// cout << *ptr2 << endl;  

		int v;
		ptr2 = &v;
		cout << ptr2 << endl;
		*ptr2 = 15;
		cout << *ptr2 << endl;

		// Why use pointers? ------------------------------------------------------------------------------------------------

		// 1. return multiple values from a function
		int numbers[5] = { 5, 4, -2, 26, 3 };
		cout << "Min is " << getMin(numbers, 5) << endl;
		cout << "Max is " << getMax(numbers, 5) << endl;

		int min, max;
		getMinAndMax(numbers, 5, &min, &max);
		cout << "Min is " << min << endl;
		cout << "Max is " << max << endl;

		// 2. use arrays
		int arr[5] = { 1, 4, 7, 3, 9 };

		cout << arr << endl;  // arr holds the memory location of the first array position
		cout << &arr[0] << endl;

		cout << *(arr + 2) << endl;
		//cout << *(arr + 5) << endl;         <- logical error!

		// 3. use dynamic array
		int size;
		cout << "Array size: ";
		cin  >> size;
		//int myArray[size];                  <- compiler error! the size of an array must be set at compile time

		int* myArray = new int[size]; // allocate memory to be used by myArray
		for (int i=0; i<size; i++) {
			cout << "Number: ";
			cin  >> myArray[i];
		}

		for (int i = 0; i < size; i++) {
			//cout << myArray[i] << " ";     <- also works!
			cout << *(myArray + i) << " ";
		}

		delete[]myArray;  // deallocate memory used by myArray. myArray now points to an unused memory location
		myArray = NULL;   // myArray now points to no memory location


		// 3. use multi-dimensional dynamic array
		int rows, cols;
		cout << "Rows, Cols: ";
		cin >> rows >> cols;

		// create (alllocate memory)
		int** my2Darray = new int* [rows];  
		for (int i=0; i<rows; i++) {
			my2Darray[i] = new int[cols];
		}

		// access 
		my2Darray[0][0] = 8;
		cout << my2Darray[0][0] << endl;

		// delete (deallocate memory)
		for (int i = 0; i < rows; i++) {
			delete[] my2Darray[i];
		}

		delete[] my2Darray;
		my2Darray = NULL;


		return 0;
	}

}