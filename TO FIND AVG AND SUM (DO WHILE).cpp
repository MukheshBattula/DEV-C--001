#include<stdio.h>
int main()
{
	int i=1,sum=0,n,k,avg;
	printf("enter no.of avg");
	scanf("%d",&n);
	do
	{
		scanf("%d",&k);
		sum=sum+k;
		i++;
	}while(i<=n);
	printf("sum=%d",sum);
	avg=(float)(sum/n);
	printf("avg=%d",avg);
}
