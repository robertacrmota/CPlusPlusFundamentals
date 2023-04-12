#pragma once
namespace functionPointer {
	bool ascendingCompare(int a, int b);
	bool descendingCompare(int a, int b);
	void sort(int arr[], int size, bool (*compareFunc)(int, int));

	int addNumbers(int a, int b);
	int getNumber();

	int main(int argc, char* argv[]);
};

