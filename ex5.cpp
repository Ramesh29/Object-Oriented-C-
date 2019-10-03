#include <iostream>
#include<bitset>


using namespace std;


int main() {
	int size = 1024;
	bitset<1024> bits;

	// set all the bits to 1
	bits.set();
	// apply Sieve of Eratosthenes method
	for (int i = 2; i < size; i++) {

		if (bits[i] == 1) {

			for (int k = i + i; k < size; k = k + i) {
				if (bits[k] == 1) {
					bits.flip(k);
				}
			}
		}
	}

	cout << "Enter a number between 2 - 1023 or -1 to exit" << endl;
	int response;
	cin >> response;
	while (response != -1) {
		if (bits[response] == 1) {
			cout << response << " is a prime number" << endl;
		}
		else {
			cout << response << " is not a prime number " << endl;
			cout << "prime factors are : ";
			for (int index = 2; index < size; ) {
				if (bits[index] == 1 && (response % index) == 0) {
					cout << index << "  ";
					response = response / index;
				}else {
					index++;
				}
	
			}
			cout << endl;
		}
		cout << "Enter a number between 2 - 1023 or -1 to exit" << endl;
		cin >> response;

	}

	return 0;
}