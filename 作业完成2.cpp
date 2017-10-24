#include<stdio.h>
int main()
{
	double x,b;
	int a;
	printf("请输入一个实数");
	scanf("%lf",&x);
	a=(int)x;
	b=x-a;//b是该数的小数部分 ，判断小数部分是否大于0.5 
	
	if 
	(b>=0.5)
	a=a+1;
	else
	 a=a;
	
	printf("四舍五入后为%d",a);
	
	return 0;
	
	
	
}
