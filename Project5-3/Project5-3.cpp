#include <iostream>

using namespace std;
int main() {
	int number = 0;
	int reminader = 0;
	int quotient = 0;
	cout << "Please enter a number: ";
	cin >> number;
	while (number != 0) {
		reminader = number % 2;
		cout << reminader << endl;
		quotient = number / 2;
		number = quotient;
	}

}