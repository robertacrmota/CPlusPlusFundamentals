#include "DataTypesPrimitive.h"
#include <iostream>

using namespace std;


/*
	Tutorial
	- What primitive data types?
		- int: integer (4 bytes)
		- float: floating-point (4 bytes)
		- double: (8 bytes)
		- void
		- char: character (1 byte)
		- boolean: (1 byte)

*/
namespace dataTypesPrimitive {

	int main(int argc, char* argv[]) {	
		int integer_number = 10;
		float float_number = 10.5;	
		float float_scientific = 97e4; // scientific notation. the number after "e" represents the power of 10
		double double_number = 10.5;

		cout << "int = " << integer_number << endl;
		cout << "float = " << float_number << endl;
		cout << "float_scientific = " << float_scientific << endl;
		cout << "double = " << double_number << endl;

		return 0;
	}
}
