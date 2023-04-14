#include <iostream>
#include "Pointers.h";
#include "FunctionPointer.h";
#include "Classes.h";
#include "OperatorOverloading.h";
#include "InheritanceClasses.h";

using namespace pointer;
using namespace functionPointer;
using namespace classes;
using namespace operatorOverloading;
using namespace inheritanceClasses;

/*
* 
*   BASICS
*   - pointer
*   - function pointer
* 
*   OOP
*   - class + access modifiers + constructors/destructors 
*   - operator overloading
*   - inheritance super/derived classes + function overriding
* 
*/

int main(int argc, char* argv[])
{
	// BASICS
	//return pointer::main(argc, argv);
	//return functionPointer::main(argc, argv);


	// OOP
	//return classes::main(argc, argv);
	//return operatorOverloading::main(argc, argv);
	return inheritanceClasses::main(argc, argv);
}
