#include<stdio.h>
int main()
{
	int n,count=2,i=1;
	scanf("%d",&n);
	while(count<n)
	{
		if(n%count==0)
		{
			i=0;
			break;
		}
		count++;
	} if(i)
	printf("%d is prime ",n);
	else
	printf("%d is not prime",n);
}
