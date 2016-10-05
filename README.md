#include<iostream>
#include<math>
using namespace std;
int main()
{
double x,y,a;
printf("введите значение x:";
scanf("%lf", &x);
printf("введите значение y:";
scanf("%lf", &y);
a=(sqrt(x*x+y*y)/(x*y-2));
printf(" a=%f", a);
return 0;
}
