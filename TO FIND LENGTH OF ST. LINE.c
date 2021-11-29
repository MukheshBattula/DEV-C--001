#include<stdio.h>
#include<math.h>
main()
{
	float x1,x2,y1,y2,l;
	printf("enter x1,x2,y1,y2 value");
	scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
	l=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("THE LENGTH OF A ST.LINE is %f\n",l);
}
