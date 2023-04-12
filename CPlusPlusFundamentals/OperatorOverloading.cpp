#include <iostream>
#include <string>
#include <list>

using std::cout;
using std::endl;
using std::cin;
using std::ostream;
using std::string;
using std::list;

/*
	Tutorial 3

	- What is operator overloadin?
	  - Ex: << and += operators
	- Why use operator overloading?
	

*/
namespace operatorOverloading {

	struct Question
	{
		string Name;
		string Type;
		int Difficulty;

		Question(string name, string type, int difficulty) {
			this->Name = name;
			this->Type = type;
			this->Difficulty = difficulty;
		};

		bool operator==(const Question& q) const {
			return this->Name.compare(q.Name) == 0;
		}
	};
	ostream& operator<<(ostream& COUT, Question& q) {

		COUT << "Name: " << q.Name << endl;
		COUT << "Type: " << q.Type << endl;
		COUT << "Difficulty: " << q.Difficulty << endl;

		return COUT;
	}
	

	struct QuestionList {
		list<Question> questions;

		void operator+=(const Question& q) {
			this->questions.push_back(q);
		}
		void operator-=(const Question& q) {
			this->questions.remove(q);
		}
	
	};
	ostream& operator<<(ostream& COUT, QuestionList& list) {

		for (Question q : list.questions) {
			COUT << q << endl;
		}

		return COUT;
	}
	
	

    int main(int argc, char* argv[])
    {
		Question q1("3 Sum", "Array", 2);
		Question q2("Number of Islands", "Dynamic Programming", 3);
		cout << q1 << endl << q2 << endl;

		QuestionList list1;
		list1 += q1;
		list1 += q2;
		list1 -= q1;
		cout << list1;

		return 0;
    }
}