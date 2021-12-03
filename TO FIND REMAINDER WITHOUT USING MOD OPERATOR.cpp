#include<stdio.h>
int main()
{
	int a,b,x;
	scanf("%d%d",&a,&b);
	x=a-((a/b)*b);
	printf("the remainder is %d",x);
}

