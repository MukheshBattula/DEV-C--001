#include<stdio.h>
int main()
{
	int count=2,n,i=1;
	scanf("%d",&n);
	do
	{ 
	if(n%count==0)
	{
		i=0;
		break;
	}count++;
	}while(count<n);
     if(i)
	 printf ("%d is prime no.",n);
	 else
	 printf("%d is not a prime no.",n);
}
