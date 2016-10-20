#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
using namespace std;
float sum(float a, float b)
{
	return a + b;
}
float sub(float a, float b)
{
	return a - b;
}

float pow1(float a, float b)
{
	return a*b;
}
float div(float a, float b)
{
	return a/b;
}

int main() {
	float a = 15, b = 17;
	cout << "result1=" << sum(a, b);
	cout << "result2=" << sub(a, b);
	cout << "result3=" << pow1(a, b);
	cout << "result4=" << div(a, b);
	_getch();
	return 0;
}
	