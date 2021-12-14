#include<stdio.h>
int main ()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	switch(a>b&&a>c)
	{
		case 1: printf("a is the maximum no.%d",a);
		        break;
	    case 0: switch(b>c)
	            printf("b is the maximum no.%d",b);
	            break;
	    case 3: switch(c>a&&c>b)
	            printf("c is the maximum no.%d",c);
	}           
}
