#include<stdio.h>
int main()
{
	int i=1,sum=0,n,k,avg;
	printf("enter how many no.s avg.");
	scanf("%d",&n);
	while(i<=n)
	{
		scanf("%d",&k);
		sum=sum+k;
		i++;
	}
	printf("sum%d",sum);
	avg=(float)(sum/n);
	printf("Avg%d",avg);
}
