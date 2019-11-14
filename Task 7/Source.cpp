#include <iostream>
using namespace std;

void recursion(int n) {
	if (n < 0) {
		return;
	}
	
	else {
		cout << n << " ";
		recursion(n - 1);
		cout << n << " ";
		return;
	}
}

int main() {
	int n;
	cout << "put a number... any number...";
	cin >> n;
	recursion(n);
}