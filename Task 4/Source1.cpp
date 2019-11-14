//interview
#include <iostream>
using namespace std;
#define MAX_LENGHT 50
int main() {
	char name[MAX_LENGHT] = { 0 };
	int age;
	char gender[MAX_LENGHT] = { 0 };
	char address[MAX_LENGHT] = { 0 };
	char married;
	float height;
	char Y;
	char N;
	cout << "I will be asking you a few questions.\n";
	cout << "What is your name? \n";
	cin >> name;
	cout << "Your age?\n";
	cin >> age;
	cout << "What's your gender?\n";
	cin >> gender;
	cout << "Whats your address?\n";
	cin >> address;
	cout << "Are you married? [Y/N]\n";
	cin >> married;
	cout << "Last question, whats your height in meters?\n";
	cin >> height;
	cout << "Thanks";
	cout << "Okaaaaay so your name is: " << name << endl;
	cout << "Your age is:" << age << endl;
	cout << "Your gender is:" << gender << endl;
	cout << "Your address is:" << address << endl;
	if (married == 'Y'){
		cout << "You are married";
	}
	else if (married == 'N'){
		cout << "You are not married" << endl;
	}
	cout << "\nAnd your height is:" << height << "meters" << endl;
	return 0;
}


