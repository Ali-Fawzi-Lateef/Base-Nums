#include <iostream>
using namespace std;

string to_base(int number, int base) {
	string bases = "0123456789ABCDEF";
	string result = "";
	while (number > 0) {
		result = bases[number % base] + result;
		number /= base;
	}
	return result;
}
int main() {
	int n, b;
	do {
		cout << "Enter the number and the base number system: _ _\b\b\b";
		cin >> n >> b;
		cout << "The number " << n << " base number " << b;
		cout << " the result is: " << to_base(n, b) << endl;
	} while (n != 0 || b != 0);
	return 0;
}