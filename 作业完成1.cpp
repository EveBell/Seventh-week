#include<stdio.h>
int main()
{
	double x,b;
	int a;
	printf("请输入一个实数");
	scanf("%lf",&x);
	a=(int)x;
	b=x-a;
	printf("整数部分%d\t小数部分%lf",a,b);
	
	
	
	return 0;
	

}
