#include <iostream>
#include <string>
#include <list>

using namespace std;

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
		~Question() {};
			
	};
	ostream& operator<<(ostream& COUT, Question& q) {

		COUT << "Name: " << q.Name << endl;
		COUT << "Type: " << q.Type << endl;
		COUT << "Difficulty: " << q.Difficulty << endl;

		return COUT;
	}
	

    int main(int argc, char* argv[])
    {
		Question q1("3 Sum", "Array", 2);
		Question q2("Number of Islands", "Dynamic Programming", 3);
		cout << q1 << endl << q2;

		return 0;
    }
}