#include <stdio.h>
int main()
{
	double a,b,c,d,e,f;//�ֱ���x,yǰ��ϵ���������� 
	double x,y;
	
	printf("�������һ��ʽ����x��ϵ��");
	scanf("%lf",&a);
	printf("�������һ��ʽ����y��ϵ��");
	scanf("%lf",&b) ;
	
	printf("�������һ��ʽ���еĳ���");
	scanf("%lf",&c) ;
	
	printf("������ڶ���ʽ���е�x��ϵ��");
	scanf("%lf",&d);
	printf("������ڶ���ʽ���е�y��ϵ��");
	scanf("%lf",&e);
	
	printf("������ڶ���ʽ���еĳ���");
	scanf("%lf",&f) ;
	
	x=(c*e-b*f)/(a*e-b*d);
	y=(c*d-f*a)/(b*d-a*e);
	
	printf("x=%lfy=%lf",x,y);
	return 0;
	
}
