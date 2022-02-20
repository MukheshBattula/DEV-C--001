#include<stdio.h>
int func(int);
int main ()
{
	int n,sq;
	scanf("%d",&n);
	sq=func(n);
	printf("square %d",sq);
}
int func(int a)
{
	return a*a;
}
