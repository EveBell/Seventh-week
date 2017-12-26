#include<stdio.h>
int main(){
	int n,i,sum,temp;
	scanf("%d",&n);
	int flag=0;
	sum=0;
	
	
	for(i=10000;i<=99999;i++){
		int a,b,c,d,e;
		int m=i;
		a=m%10;
		m/=10;
		b=m%10;
		m/=10;
		c=m%10;
		m/=10;
		d=m%10;
		m/=10;
		e=m%10;
		if(a==e&&b==d)
		  {if(a+b+c+d+e==n)
		  {flag=1;printf("%d\n",i);
		  }
		  }
	}
	
	for(i=100000;i<=999999;i++){
		int a,b,c,d,e,f;
		int m=i;
		a=m%10;
		m/=10;
		b=m%10;
		m/=10;
		c=m%10;
		m/=10;
		d=m%10;
		m/=10;
		e=m%10;
		m/=10;
		f=m%10;
		if(a==f&&b==e&&c==d)
		  {
		  	if(a+b+c+d+e+f==n)
		     {flag=1;
		     printf("%d\n",i);
		     }
		  }
		
	}
	
	if(flag==0)
	  printf("-1");
	  
	return 0; 
	
}
