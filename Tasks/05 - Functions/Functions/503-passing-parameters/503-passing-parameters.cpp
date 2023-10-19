#include <iostream>
using namespace std;

int L;		//This is not an ideal location - we will soon address this

double add(double x, double y) {
	return x + y;
}

void starBox(string text) {

	int length = add(text.length(), 4);
	// c++ lambda function
	auto fn = [length]() {
		for (size_t i = 0; i < length; i++)
		{
			cout << "*";
		}
		cout << endl;
		};

	fn();
	cout << "* " + text + " *" << endl;
	fn();

}

int main()
{
	const string message = "Welcome to Computer Science";

	starBox(message);

	//Tell the calling shell all is well
	return 0;
}