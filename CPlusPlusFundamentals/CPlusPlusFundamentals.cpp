#include <iostream>
#include "Pointers.h";
#include "FunctionPointer.h";
#include "OperatorOverloading.h";
#include "Classes.h";

using namespace pointer;
using namespace functionPointer;
using namespace classes;
using namespace operatorOverloading;


/*
* 
*   BASICS
*   - pointer
*   - function pointer
* 
*   OOP
*   - class + access modifiers + constructors/destructors 
*   - operator overloading
* 
*/

int main(int argc, char* argv[])
{
	// BASICS
	//return pointer::main(argc, argv);
	//return functionPointer::main(argc, argv);


	// OOP
	return classes::main(argc, argv);
	//return operatorOverloading::main(argc, argv);
}
