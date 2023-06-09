#include <iostream>
#include<string>
#include "Classes.h"

using std::cout;
using std::endl;
using std::string;

namespace classes {

	/*
	   Tutorial 
	   - What is a class?
	   - What are access modifiers? public, protected, private
	   - What is a constructor?
	   - What types of constructors? Default, parametrized
	   - What is a destructor?
	*/

	class Question {
	private:
		string title;
		string type;
		int difficulty;
		string* testCases;
		int testCasesCapacity;
		int testCasesCounter;

	public:
		// Default constructor: no parameters
		Question() { 
			this->title = "unknown";
			this->type  = "unknown";
			this->difficulty = -1;
			this->testCases  = nullptr;
			this->testCasesCapacity = -1;
			this->testCasesCounter = 0;

			cout << this->title << " invoked default constructor" << endl;
		}

		// Parametrized constructor
		Question(string title, string type, int difficulty, int testCasesCapacity) {
			this->title = title;
			this->type = type;
			this->difficulty = difficulty;
			this->testCases = new string[testCasesCapacity];
			this->testCasesCapacity = testCasesCapacity;
			this->testCasesCounter = 0;

			cout << this->title << " invoked parametrized constructor" << endl;
		}

		// Destructor
		~Question() {
			delete[] this->testCases;
			this->testCases = nullptr;

			cout << this->title << " invoked destructor" << endl;
		}

		void addTestCase(string testCase) {
			if (this->testCasesCounter == this->testCasesCapacity) { return; }

			this->testCases[this->testCasesCounter] = testCase;
			this->testCasesCounter++;
		}

		void print() {
			cout << "Title: " << this->title << endl;
			cout << "Type: "  << this->type  << endl;
			cout << "Difficulty: " << this->difficulty << endl;

			for (int i = 0; i < this->testCasesCounter; i++) {
				cout << "Testcase " << i << ": " << this->testCases[i] << endl;
			}
		}
	
		// getters and setters
		void setTitle(string title) {
			this->title = title;
		}
		string getTitle() {
			return this->title;
		}

		void setType(string type) {
			this->type = type;
		}
		string getType() {
			return this->type;
		}

		void setDifficulty(int difficulty) {
			this->difficulty = difficulty;
		}
		int getDifficulty() {
			return this->difficulty;
		}


	};


	int main(int argc, char* argv[]) {

		Question q1; // default constructor invoked
		q1.setTitle("Median of two sorted arrays");
		q1.setType("Array");
		q1.setDifficulty(3);

		Question q2("2 Sum", "Array", 2, 5); // parametrized constructor invoked
		q2.addTestCase("[3, 4, 5, 6, 7]");

		cout << "Question 1" << endl;
		q1.print();

		cout << endl << "Question 2" << endl;
		q2.print();

		return 0;
	} // destructors invoked
};