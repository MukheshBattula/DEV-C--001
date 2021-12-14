#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,d,r1,r2,i;
	scanf("%f%f%f%",&a,&b,&c);
	d=(b*b)-4*a*c;
	switch(d>0)
	{
		case 1:
		{
			r1=(-b+sqrt(d))/(2*a);
			r2=(-b-sqrt(d))/(2*a);
			printf("two distinct and real roots are %f and %f",r1,r2);
			break;
			
		}
		case 0:
		switch(d<0)
		{
			r1=r2=-b/2*a;
			i=sqrt(-d)/2*a;
			printf("two complex roots %f+i%f and %f-i%f",r1,r2,i);
		}	
          break;	
	    case 2:
	    	{
	    		r1=r2=-b/2*a;
	    		printf("two real and equal roots %f and %f",r1,r2);
			} 
			   break;
			
	}
	
}
