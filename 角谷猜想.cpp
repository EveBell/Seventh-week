#include<stdio.h>
int main(void){
	int x,n,T,i;
	x=0;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d",&n);
		
    if(n==1)
       printf("%c",0);
	while(n!=1)
		{if(n%2==0){
			n/=2;
			x++;
		}
		else
		{n=(3*n+1)/2;
		 x++;
		}
	
		if(n==1)
		printf("%d\n",x);
		}
	
		
	}
	return 0;
}
