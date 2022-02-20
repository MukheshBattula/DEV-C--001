#include<stdio.h>
int fact (int);
 int main()
{
	int p,a;
	printf("enter a number");
	scanf("%d",&p);
	a=fact(p);
	printf("fact %d=%d",p,a);
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
