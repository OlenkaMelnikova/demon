#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
int input;
cout << "1.Read online\n";
cout << "2.Download online\n";
cout << "3.Listen online\n";
cout << "4.Exit online\n";
cin >> input;
switch (input) {
case 1: {
	cout << "Read online book called\n";
	break;
}
case 2: {
	cout << "Download online book called\n";
	break;
}
case 3: {
	cout << "Listen online book called\n";
	break;
}
case 4: {
	cout << "Thank you for reading books!\n";
	break;
}
default:
	cout << "Error,bad input,quitting\n";
}
}




	
