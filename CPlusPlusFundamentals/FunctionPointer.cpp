#include <iostream>
#include "FunctionPointer.h"

using std::cout;
using std::endl;

namespace functionPointer {

	/*
	   Tutorial 2

	   - What is a function pointer?
	   - Why use a function pointer?

	*/

	bool ascendingCompare(int a, int b) { return a > b; }
	bool descendingCompare(int a, int b) { return a < b; }
	void sort(int arr[], int size, bool (*compareFunc)(int, int)) {

		for (int i = 0; i<size; i++) {
			for (int j = i + 1; j < size; j++) {
				if (compareFunc(arr[i], arr[j])) {
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}

	int addNumbers(int a, int b) { return a + b; }
	int getNumber() { return 5; }

	int main(int argc, char* argv[]) {
		
		// What is a function pointer?
		cout << getNumber() << endl;
		cout << getNumber << endl;   // the name function holds the function's address

		int (*funcPtr)();  // funcPtr can hold the address of any function with this signature
		funcPtr = getNumber;
		cout << funcPtr() << endl;

		int(*funcPtr2)(int, int) = addNumbers;
		cout << funcPtr2(3, 4) << endl;

		// Why use a function pointer?
		int arr[5] = { 4, 2, 6, 1, 3 };

		bool (*compareFuncPtr) (int, int) = descendingCompare; // pass a function as parameter to another function
		sort(arr, 5, compareFuncPtr);

		for(int num : arr)
		{
			cout << num << " ";
		}

		return 0;
	}
};