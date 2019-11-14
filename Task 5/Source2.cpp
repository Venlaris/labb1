#include <stdio.h>
#include <cstring>

int main() {
	char name[100];
	int age;
	char gender[40];
	char address[58];
	int married; //married wont do as I want it to, its 3 am.
	char marriedchar = 'N';
	float height;

	printf("I will be asking you a few questions.\n");

	printf("What is your name? \n");
	scanf_s("%s", name, sizeof(name));

	printf("Your age?\n");
	scanf_s("%d", &age);

	printf("What's your gender?\n");
	scanf_s("%s", gender, sizeof(gender));

	printf("What's your address?\n");
	scanf_s("%58s", address, sizeof(address));

	printf("Are you currently married? [Y/N]\n");
	scanf_s("%c", &marriedchar,1);
	getchar();
	printf("What's your height in meters?\n");
	scanf_s("%f", &height);
	printf("Your name is: %s \n", name);
	printf("Your age is %d \n", age); 
	printf("Your gender is %s \n", gender);
	printf("Your address is %s \n", address);
	married = !(marriedchar == 'n' || marriedchar == 'N');
	if (married == !(marriedchar == 'n' || marriedchar == 'N') {
		printf("You are married\n");
	}
	else {
		printf("Congratulations you are not married!\n");
	}
	printf("You are %.2f meters tall", height);
}
