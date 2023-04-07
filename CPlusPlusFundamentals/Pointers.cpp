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
*/

namespace pointers {

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



		return 0;
	}

}