#include<stdio.h>
main()
{
	int a,b,s;
	scanf("%d%d",&a,&b);
	s=a;
	a=b;
	b=s;
	printf("the swapped no.s%d%d",a,b);
}
