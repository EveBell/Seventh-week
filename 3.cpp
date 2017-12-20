#include <stdio.h>
double Func(double x,double y);

int main()
{
    double a=100.0, b, sD;
	printf("请输入一个实数:");
	scanf("%1f",&b);
	sD=Func(a,b);
	printf("The Square Difference is %1f.\n",sD);
	
	return 0;
}

double Func(double x,double y)
{
	double z;
	z=(x+y)*(x-y);
	
	return z;
}
