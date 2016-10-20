// calculator1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "stdafx.h"
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
float dev(float a, float b)
{
	if (b != 0) return a / b;
	else return 0;
}
float sqrt1(float a)
{
	if (a <= 0)
		return 0;
	else
	{
		double c;
		c = 1;
		while (c*c != a)
		{
			c = 1. / 2 * (c + a / c);
		}
		return c;
	}

}

int main() {
	float a = 4, b = 17;
	cout << "result1=" << sum(a, b);
	cout << "result2=" << sub(a, b);
	cout << "result3=" << pow1(a, b);
	cout << "result4=" << dev(a, b);
	cout << "result5=" << sqrt1(a);
	_getch();
	return 0;
}

