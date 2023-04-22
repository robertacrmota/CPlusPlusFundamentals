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
	- What data type modifiers?
		- long
		- short
		- unsigned
		- signed

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

		// data type modifiers
		int linteger = 2147483649;
		long int long_linteger = 2147483649; // long increases the length of the data type to 4 bytes. used with: int, double
		cout << "integer = " << linteger << endl; // overflow!
		cout << "long_integer = " << long_linteger << endl;

		int sinteger = 32768;
		short int short_sinteger = 32768; // short decreases the length of a data type to 2 bytes. used with: int
		cout << "integer = " << sinteger << endl;
		cout << "short_integer = " << short_sinteger << endl;

		int uinteger = -10; // unsigned stores positive values only. used with: int, char. 
		unsigned int unsigned_uinteger = -10;
		char ucharacter = 'A';
		unsigned char unsigned_ucharacter = 'B';

		cout << "integer = " << uinteger << endl;
		cout << "unsigned_integer = " << unsigned_uinteger << endl;

		cout << "character = " << ucharacter << endl;
		cout << "unsigned_character = " << unsigned_ucharacter << endl;

		int integer = -90; // signed stores both positive and negative values. used with: int, char
		signed int signed_integer = -90;
		char character = 'A';
		signed char signed_character = 'A';
		
		cout << "integer = " << integer << endl;
		cout << "signed_integer = " << signed_integer << endl;

		cout << "character = " << character << endl;
		cout << "signed_character = " << signed_character << endl;

		return 0;
	}
}
