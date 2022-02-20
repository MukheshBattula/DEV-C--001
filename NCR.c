#include<stdio.h>
int fact (int);
int main()
{
	int n,r,ncr;
	scanf("%d%d",&n,&r);
	ncr=fact(n)/(fact(r)*fact(n-r));
	printf("value%d%d=%d",n,r,ncr);
}
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
