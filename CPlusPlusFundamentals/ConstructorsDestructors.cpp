#include <iostream>
#include<string>
#include "ConstructorsDestructors.h"

using std::cout;
using std::endl;
using std::string;

namespace constructorsDestructors {

	/*
	   Tutorial 

	   - What is a constructor?
	   - What types? Default, parametrized
	   - What is a destructor?

	*/

	class Question {
	public:
		string title;
		string type;
		int difficulty;

		// Default constructor: no parameters
		Question() { 
			this->title = "unknown";
			this->type = "unknown";
			this->difficulty = -1;

		}

		// Parametrized constructor
		Question(string title, string type, int difficulty) {
			this->title = title;
			this->type = type;
			this->difficulty = difficulty;
		}

		void print() {
			cout << "Title: " << this->title << endl;
			cout << "Type: "  << this->type  << endl;
			cout << "Difficulty: " << this->difficulty << endl;
		}


	};


	int main(int argc, char* argv[]) {

		Question q1;
		Question q2("2Sum", "Array", 2);

		q1.print();
		q2.print();

		return 0;
	}
};