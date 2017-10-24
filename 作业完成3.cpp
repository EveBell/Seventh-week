#include <stdio.h>
int main()
{
	double a,b,c,d,e,f;//分别是x,y前的系数及常数项 
	double x,y;
	
	printf("请输入第一个式子中x的系数");
	scanf("%lf",&a);
	printf("请输入第一个式子中y的系数");
	scanf("%lf",&b) ;
	
	printf("请输入第一个式子中的常数");
	scanf("%lf",&c) ;
	
	printf("请输入第二个式子中的x的系数");
	scanf("%lf",&d);
	printf("请输入第二个式子中的y的系数");
	scanf("%lf",&e);
	
	printf("请输入第二个式子中的常数");
	scanf("%lf",&f) ;
	
	x=(c*e-b*f)/(a*e-b*d);
	y=(c*d-f*a)/(b*d-a*e);
	
	printf("x=%lfy=%lf",x,y);
	return 0;
	
}
