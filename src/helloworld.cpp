//============================================================================
// Name        : ChangzhouStFXLec1.cpp
// Author      : Othman Soufan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
//	const int SIZE=5;
	int numbers[] = {10, 20, 30, 40, 50};

	//loop the array
//	for(int i=0; i<SIZE; i++){
//		cout << numbers[i] << endl;
//	}

	//range-based for loop
	for(auto val : numbers){
		cout << val << endl;
	}

	return 0;
}
