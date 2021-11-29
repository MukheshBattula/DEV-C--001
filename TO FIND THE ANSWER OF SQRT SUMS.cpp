#include<stdio.h>
#include<math.h>
main()
{
	int x,y;
	printf("enter the value of x&y");
	scanf("%d%d",&x,&y);
	printf("The 1st Answer is%d\n",sqrt(((x*x)+(y*y))/((x*x)+1)));
	printf("The 2nd Answer is%d\n",sqrt(((x*x)+(y*y))/((x*x)-(y*y))));
}
