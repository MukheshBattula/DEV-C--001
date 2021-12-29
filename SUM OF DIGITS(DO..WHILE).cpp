#include<stdio.h>
int main()
{
	int k,sum=0,n;
	scanf("%d",&n);
	do
	{
		k=n%10;
		sum=sum+k;
		n=n/10;
	}while(n>0);
	printf("sum of the digits=%d",sum);
}
