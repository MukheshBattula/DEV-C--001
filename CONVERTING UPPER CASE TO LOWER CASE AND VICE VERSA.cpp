#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	printf("entered character is %c",c);
	if(c>=65&&c<=91)
	{
	   c=c+32;
	   printf("\n conerted character is:%c",c);	
	}
	else
	{
		c=c-32;
		printf("\n converted character is:%c",c);
	}
}
