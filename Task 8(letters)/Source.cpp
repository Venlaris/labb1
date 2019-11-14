#include <iostream>
using namespace std;

int main() {
	char n;
	char alphabet = 'A';

	cout << "Enter the uppercase letter of the last row: ";
	cin >> n;

	for (int m = 1; m <= (n - 'A' + 1); ++m) {
		for (int i = 1; i <= m; ++i) {
			cout << alphabet << " ";
		}
		++alphabet;
		cout << endl;
	}
	return 0;
}