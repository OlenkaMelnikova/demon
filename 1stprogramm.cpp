#include<stdio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
//Вычислить значение a
//Вывести на экран значение a
void main()
{
	double x, y, a;// Определить переменные
	// Ввести исходные данные
	printf_s("ââåäèòå çíà÷åíèå x:");
	scanf_s("%lf", &x);
	printf_s("ââåäèòå çíà÷åíèå y:");
	scanf_s("%lf", &y);
	// Вычислить значание выражения
	a = (sqrt(x*x + y*y) / (x*y - 2));
	printf_s(" a=%f", a);
	system("pause");// Остановить программу до нажатия любой клавиши
}
