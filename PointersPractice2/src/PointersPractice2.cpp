//============================================================================
// Name        : PointersPractice2.cpp
// Author      : Nathaniel-Joel Parizi
// Version     :
// Copyright   : Your copyright notice
// Description : Pointers Practice in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void manipulate(int *q) {

	*q = 10;

	cout << "Manipulate value : " << *q << endl;

}

int main() {
	cout << "Hello" << endl; // prints Hello
	int num = 9;
	int* pnNum = &num;
	cout << *pnNum << endl;
	manipulate(&num);
	cout << " Num is : " << num << endl;

	float r = (float)7/2;  // cast to float
	float* pnR = &r;

	cout << r << endl;
	cout << "Address: " <<  pnR << " location: " << *pnR << endl;

	string fruits[] = {"lemon","strawberry","pineapple","melon"};
	string* pnFruits = fruits;

	int fruitsLength = sizeof(fruits)/sizeof(string);



	cout << fruitsLength << endl;

	for(int i = 0; i < fruitsLength; i++){

		cout << "i:" << i << " " << fruits[i] << endl;

	}

	for(int i = 0; i < fruitsLength; i++, pnFruits++){
		cout << *pnFruits << endl;


	}


   string* pnIndex = &fruits[3];
   cout << "Address: " <<  pnIndex << " value is " << *pnIndex << endl;

   string *pnFruitsB = fruits;

   pnFruitsB += 2;



   cout << "new value is : " << *pnFruitsB << endl;




	return 0;
}
