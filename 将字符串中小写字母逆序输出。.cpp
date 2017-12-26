#include<stdio.h>
#include<string.h>
int main(){
	int i,j,n;
	scanf("%d",&n);
	 getchar();
	char a[100];
	
	while(n--)
	{ gets(a);
	  j=strlen(a);
	  for(;j>=0;j--)
	  {
	  	if(a[j-1]>'a'&&a[j-1]<'z')
	  	   printf("%c",a[j-1]);
	  }
	  printf("\n");
	 } 
	 
	 return 0;
	  
	  
}
