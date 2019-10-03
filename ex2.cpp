#include <iostream>
#include<vector>

using namespace std;



int main() {
	vector<int> v(1000);

	// initialize all entries in v to 1
	for (int i = 0; i < v.size(); i++) {
		v[i] = 1;
	}
	int midway = v.size() / 2;
	int size = v.size();
	for (int j = 2; j < midway; j++) {
		if (v[j] == 1) {

			for (int k = j + j ; k < size; k = k + j ) {
				if (v[k] == 1) {
					v[k] = 0;
				}
			}
		}
	}

	// print out the prime numbers
	for (int c = 1; c < size; c++) {
		if (v[c] == 1) {
			cout << c << "  ";
		}
	}
	cout << endl;
	return 0;
}