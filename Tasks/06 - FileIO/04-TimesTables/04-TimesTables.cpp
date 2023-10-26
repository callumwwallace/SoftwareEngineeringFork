#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream document;
	document.open("tables.txt");
	for (unsigned int r = 2; r <= 12; r++) {
		for (unsigned int c = 2; c <= 12; c++) {
			document << r * c << "\t";
		}
		document << endl;
	}
	document << endl;

	return document.close(), 0;
}