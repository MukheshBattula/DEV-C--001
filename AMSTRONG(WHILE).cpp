#include<stdio.h>
int main()
{
	int d,k,n,sum=0;
	scanf("%d",&n);
	d=n;
	while(n>0)
	{
		k=n%10;
		sum=sum+k*k*k;
		n=n/10;
	}printf("sum %d",sum);
	 if(sum==d)
	printf("amstrong");
	else
	printf("no");
	
}
