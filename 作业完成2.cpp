#include<stdio.h>
int main()
{
	double x,b;
	int a;
	printf("������һ��ʵ��");
	scanf("%lf",&x);
	a=(int)x;
	b=x-a;//b�Ǹ�����С������ ���ж�С�������Ƿ����0.5 
	
	if 
	(b>=0.5)
	a=a+1;
	else
	 a=a;
	
	printf("���������Ϊ%d",a);
	
	return 0;
	
	
	
}
