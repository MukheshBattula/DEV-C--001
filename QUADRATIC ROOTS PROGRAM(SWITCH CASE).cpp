#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,sq,r1,r2;
	printf("enter the coefficient of x2 with sign:");
	scanf("%d",&a);
	printf("enter co-efficient of x with sign:");
	scanf("%d",&b);
	printf("enter the constant with sign:");
	scanf("%d",&c);
	sq=(pow(b,2))-(4*a*c);
	switch(sq>0||sq==0)
	{
		case 1: r1=((-b+sqrt(sq))/(2*a));
		        r2=((-b-sqrt(sq))/(2*a));
		        printf("the roots are %dand %d\n",r1,r2);
		        break;		       
		case 0: printf("the roots are imaginary");
		         break;
        	      
	}
}
