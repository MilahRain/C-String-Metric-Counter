/*
* Lecture practice
* Milah Espinoza
* 6/9/2025
*/

#include <iostream>
#include "strMetric.h"

using namespace std;

int main() {
	strMetric sm;
	string s;
	cout << "Enter a string" << endl;
	getline(cin, s);

	sm.setString(s);

	cout << "There are " << sm.countDigits() << " digits in your string. \n"
		<< "And there are " << sm.countVowels() << " vowels in your string." << endl;
}