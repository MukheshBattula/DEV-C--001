#include<stdio.h>
int main()
{
	int i=1,n;
	scanf("%d",&n);
	do
	{
      if(n%i==0)
	  printf("%d",i);
	  i++;	
 		 
	}while(i<=n);
	
}
