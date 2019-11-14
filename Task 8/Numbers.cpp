#include <iostream>
using namespace std;

int main() {
	int rows;
	
	cout << "Enter your desired number of rows: ";
	cin >> rows;

	for (int n = 1; n <= rows; ++n) {
		for (int i = 1; i <= n; ++i) {
			cout << i << " ";

		}
		cout << "\n";
	}
	return 0;

}