#include<stdio.h>
int main ()
{
	int i,s[10],n=10,sum=0;
    int avg;
	for(i=0;i<=n;i++)
	{
	 scanf("%d",&s[i]);
	 sum=sum+s[i];
	}
	printf("avg=%d",sum/n);
}
