#include<iostream>
#include "InheritanceClasses.h"

using std::cout;
using std::endl;
using std::string;

namespace inheritanceClasses {

	/*
	   Tutorial
	   - What is a parent/base class? and child/derived class?
	   - Why use inheritance?
	   - What is function overriding?
*/

	class Question {
	protected:
		string title;
		string type;
		int difficulty;
		string* testCases;
		int testCasesCapacity;
		int testCasesCounter;

	public:
		Question(string title, string type, int difficulty, int testCasesCapacity) {
			this->title = title;
			this->type = type;
			this->difficulty = difficulty;
			this->testCases = new string[testCasesCapacity];
			this->testCasesCapacity = testCasesCapacity;
			this->testCasesCounter = 0;

			cout << this->title << " invoked base class constructor" << endl;
		}

		~Question() {
			delete[] this->testCases;
			this->testCases = nullptr;

			cout << this->title << " invoked base class destructor" << endl;
		}

		void Submit() {
			cout << "running general test cases... " << endl;
		}
	};

	class SortingQuestion : public Question {
	private:
		string sortingAlgorithm;

	public:
		SortingQuestion(string title, string type, int difficulty, int testCasesCapacity, string sortingAlgorithm) 
		 :Question(title, type, difficulty, testCasesCapacity) {
			this->sortingAlgorithm = sortingAlgorithm;

			cout << this->title << " invoked derived class constructor" << endl;
		}

		~SortingQuestion() { 
			cout << this->title << " invoked derived class destructor" << endl;
		}

		void Submit() {
			cout << "running sorting test cases... " << endl;
		}
	};

	class SearchingQuestion : public Question {
	private: 
		string searchingAlgorithm;

	public:
		SearchingQuestion(string title, string type, int difficulty, int testCasesCapacity, string searchingAlgorithm)
			:Question(title, type, difficulty, testCasesCapacity) {
			this->searchingAlgorithm = searchingAlgorithm;

			cout << this->title << " invoked derived class constructor" << endl;
		}

		~SearchingQuestion() {
			cout << this->title << " invoked derived class destructor" << endl;
		}

		void Submit() {
			cout << "running searching test cases... " << endl;
		}
	};


	int main(int argc, char* argv[]) {
		
		SortingQuestion sort = SortingQuestion("Sort colors", "Sorting", 3, 0, "Insertion sort");
		SearchingQuestion search = SearchingQuestion("Search in rotated sorted array", "Searching", 3, 2, "Binary search");

		sort.Submit();
		search.Submit();

		return 0;
	}
}
