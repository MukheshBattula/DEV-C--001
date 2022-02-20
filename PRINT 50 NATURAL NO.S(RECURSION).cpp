#include<stdio.h>
int natural(int a);
int main()
{
	int a;
	a=1;
	printf("First 50 natural no.s  are ");
	natural(a);
	return 0;
}
int natural(int a)
{
	if(a<=50)
	{
		printf("%d",a);
		natural(++a);
	}
}
