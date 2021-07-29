#include <iostream>
using namespace std;

string to_base(int number, int base) { // function for convertion.
	string bases = "0123456789ABCDEF";// for converting the decimal to any base
	string result = "";
	while (number > 0) {
		result = bases[number % base] + result;
		number /= base;
	}// it store the value for the loop till it complete the converting
	return result;// return the result for the main function
}
int main() {
	int n, b;
	do {
		cout << "Enter the number and the base number system: _ _\b\b\b";
		cin >> n >> b;//get input from the user.
		cout << "The number " << n << " base number " << b;//print thetext and the input value
		cout << " the result is: " << to_base(n, b) << endl;// invoke thefunction for converting
	} while (n != 0 || b != 0);// loop condition , loop terminates when n, b = 0.
	return 0;
}
