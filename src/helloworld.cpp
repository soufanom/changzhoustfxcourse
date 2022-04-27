//============================================================================
// Name        : ChangzhouStFXLec1.cpp
// Author      : Othman Soufan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void swap(int& first, int& second){
	int temp = first;
	first = second;
	second = temp;
}

int main() {
	int a = 2, b = 3;

	cout << "before calling swap" << endl;
	cout << a << " " << b << endl;

	swap(a, b);

	cout << "after calling swap" << endl;
	cout << a << " " << b << endl;

	//what is the output of the program??
	return 0;
}
