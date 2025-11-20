/*
* Lecture practice
* Milah Espinoza
* 6/9/2025
*/

#include <string>
#include "strMetric.h"

void strMetric::setString(string s) {
	data = s;	// assign s to data

}

int strMetric::countDigits() const {
	int count = 0;	//initialize the count to zero
	for (int i = 0; i < data.length(); i++) {
		if (isdigit(data.at(i))) {
			count++;
		}
	}
	return count;
}


int strMetric::countVowels() const {
	int count = 0;
	for (int i = 0; i < data.length(); i++) {
		switch (toupper(data.at(i))) {
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'Y':
			count++;
			

		}
	}
	return count;
}
