#include<stdio.h>
int main()
{
	int d,k,n,sum=0;
	scanf("%d",&n);
    d=n;
	do
	{
		k=n%10;
		sum=sum+k*k*k;
		n=n/10;
	}while(n>0);
	printf("%d",sum);
  if(sum==d)
  printf("Armstrong no.");
  else
  printf("Not a armstrong no.");

}

