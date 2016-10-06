#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void readonlinebook()
{
	cout << "Read online book called";
}
void downloadonlinebook()
{
	cout << "Download online book called";
}
void listenonlinebook()
{
	cout << "Listen online book called";
}
int main()
{
	int input;


	cout << "1. Read online\n";
	cout << "2. Download online\n";
	cout << "3. Listen online\n";
	cout << "4. Exit\n";
	cin >> input;
	switch (input) {
	case 1:
		readonlinebook();
		break;
	case 2:
		downloadonlinebook();
		break;
	case 3:
		listenonlinebook();
		break;
	case 4:
		cout << "Thank you for reading books!\n";
		break;
	default:
		cout << "Error, bad input,quitting\n";
	}
}

	