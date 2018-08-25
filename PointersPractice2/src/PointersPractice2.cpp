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

void changeSomething(double &val) {

	val = 123.4;

}

void changeShort(short &sh) {

	sh = 777;

}

void changeLetter(char &ch) {

	ch = 'z';
}

void changeDouble(double &d) {

	d = 1000.777;
}
int main() {
	cout << "Hello" << endl; // prints Hello
	int num = 9;
	int* pnNum = &num;
	cout << *pnNum << endl;
	manipulate(&num);
	cout << " Num is : " << num << endl;

	float r = (float) 7 / 2;  // cast to float
	float* pnR = &r;

	cout << r << endl;
	cout << "Address: " << pnR << " location: " << *pnR << endl;

	string fruits[] = { "lemon", "strawberry", "pineapple", "melon" };
	string* pnFruits = fruits;

	int fruitsLength = sizeof(fruits) / sizeof(string);

	cout << fruitsLength << endl;

	for (int i = 0; i < fruitsLength; i++) {

		cout << "i:" << i << " " << fruits[i] << endl;

	}

	for (int i = 0; i < fruitsLength; i++, pnFruits++) {
		cout << *pnFruits << endl;

	}

	string* pnIndex = &fruits[3];
	cout << "Address: " << pnIndex << " value is " << *pnIndex << endl;

	string *pnFruitsB = fruits;

	pnFruitsB += 2;

	cout << "new value is : " << *pnFruitsB << endl;

	char texts[] = { "hello" };

	for (int i = 0; i < sizeof(texts); i++) {
		cout << i << ": " << texts[i] << endl;  // null terminator of the string
		if ((int) texts[i] == 0) {
			cout << "Null terminator " << (int) texts[i] << " at index " << i
					<< endl;
		}
	}

	int k = 0;

	while (true) {

		if (texts[k] == 0) {
			break;
		}

		cout << texts[k] << flush;
		k++;
	}

	cout << endl << endl;

	int length = sizeof(texts) - 1;
	char *pnStart = texts;
	char *pnEnd = texts + length - 1;

	cout << *pnStart << " this is pnStart" << endl;
	cout << *pnEnd << " this is pnEnd" << endl;

	while (pnStart < pnEnd) {

		char save = *pnStart;

		*pnStart = *pnEnd;
		*pnEnd = save;

		pnStart++;
		pnEnd--;

	}

	cout << texts << endl;
	char textsB[] = "konichiha";
	cout << textsB << endl;
	char *letter = textsB;
	letter += 5;
	cout << letter << endl;

	cout << endl << endl << "***************" << endl;

	string veggies[] = { "corn", "peas", "carrots" };

	string *pnVeggies = veggies;  // no need to use &

	// ******************** Reference Variables Practice

	int valA = 3;
	int &valB = valA; // reference variables creating an allias for this variable
	valB = 10;

	cout << "valueA:" << valA << endl << "ValueB:" << valB << endl;

	double valueC = 324.3;
	changeSomething(valueC);
	cout << valueC << endl;

	char myChar = 'a';
	changeLetter(myChar);
	cout << myChar << endl;

	short myShort = 43.2;
	changeShort(myShort);
	cout << (short) myShort << endl;

	double myDouble = 999.9;
	changeDouble(myDouble);
	cout << myDouble << endl;

	cout << "*****************" << endl;

	cout << endl << endl << endl;

	return 0;
}
