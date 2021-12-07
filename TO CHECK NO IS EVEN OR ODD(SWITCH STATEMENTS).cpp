#include<stdio.h>
int main()
{
	int k,a;
	
	scanf("%d",&a);
	k=a%2;
	switch(k)
	{
		case 0: printf("its even no.%d",a);
		        break;
		case 1: printf("its odd no.%d",a);
		        break;
		        
	}
}
