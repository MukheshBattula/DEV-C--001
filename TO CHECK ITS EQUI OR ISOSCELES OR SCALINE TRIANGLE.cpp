#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c&&c==a)
	{
		printf("equilateral triangle");
	}
	else if(a==b||b==c||a==c)
	{
		printf("isoceles triangle");
		
	}
      else
      {
      	printf(" scaline triangle");
	  }
}
	


