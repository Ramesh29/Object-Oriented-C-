// write a function to check for palindrome

#include <iostream>
#include<vector>

using namespace std;

template <typename T>
bool isPalindrome(vector<T>  v ) {


	for (int start = 0, end = v.size() - 1; start < end; start++, end--) {
		if (v[start] != v[end]) {
			return false;
		}
	}
	return true;
}

int main() {


	vector<int> v{ 1, 2, 3, 2, 1 };
	vector<int>v2{ 1,2,3,4,5 };
	vector<char> s1{ 'a','b','c' };

		if (isPalindrome<int>(v)) {
			cout << "vector v is palindrome "<< endl;
		}
		else {
			cout << "vector v is not palindrome" << endl;
		}

		if (isPalindrome<char>(s1)) {
			cout << "vector s1 is palindrome" << endl;
		}
		else {
			cout << "vector s2 is not palindrome" << endl;
		}

	return 0;
}