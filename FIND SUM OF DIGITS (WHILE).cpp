#include<stdio.h>
int main()
{
	int k,n,sum=0;
	scanf("%d",&n);
	while(n>0)
	{
		k=n%10;
		sum=sum+k;
		n=n/10;
	}
	printf("sum of the digits %d",sum);
	
}
