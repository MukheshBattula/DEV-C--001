#include<stdio.h>
 main()
{
	int a;
	printf("Enter marks");
	scanf("%d",&a);
	if(a>=90)
	{
	   printf("A");	
	}

    else if(a>=80)
    {
    	printf("B");
	}
	else if(a>=70)
	{
		printf("C");
	}
	else if(a>=60)
	{
		printf("D");
	}
    else if(a>=50)
    {
    	printf("E");
	}
	else
	{
		printf("pail");
	}
}
