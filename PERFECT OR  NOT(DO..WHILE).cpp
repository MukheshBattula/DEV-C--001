#include<stdio.h>
int main()
{
	int d,i=1,n,sum=0;
	scanf("%d",&n);
    d=n;
	do
	{
		if(n%i==0)
		sum=sum+i;
		i++;
	}while(i<n);
	printf(" %d",sum);
  if(sum==d)
  printf("perfect");
  else
  printf("not a perfect");

}

