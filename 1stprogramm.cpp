#include<stdio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
void main()
{
	double x, y, a;
	printf_s("введите значение x:");
	scanf_s("%lf", &x);
	printf_s("введите значение y:");
	scanf_s("%lf", &y);
	a = (sqrt(x*x + y*y) / (x*y - 2));
	printf_s(" a=%f", a);
	system("pause");
}
