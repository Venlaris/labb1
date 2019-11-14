//Hello world
#include <iostream>
using namespace std;

int main() {
	cout << "This is a for loop\nPress a number ";
	int n;
	cin >> n;
	int n1 = n;
	for (int i = 0; i < n; ++i)
		cout << "Hello world!\n";


	cout << "\nThis is a while loop\n";
	n = n + 1;
	while (0 < n, n = n - 1)
		cout << "Hello world!\n";



	cout << "\nThis is a do...while loop\n";
	do {
		cout << "Hello world\n";
		n1 = n1 - 1;
	} while (0 < n1);
	return 0;
}