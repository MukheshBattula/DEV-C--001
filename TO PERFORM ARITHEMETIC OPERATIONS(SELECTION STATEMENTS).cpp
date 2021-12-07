#include<stdio.h>
int main()
{
	int a,b,add,diff,pro,rem,div;
	char op;
	scanf("%c%d%d",&op,&a,&b);
	add=a+b;
	diff=a-b;
	rem=a%b;
	pro=a*b;
	div=a/b;
	switch(op)
	{
		case'+':
		printf("%d",add);
		        break;
		case'-':printf("%d",diff);
		         break;
	    case '/':printf("%d",div);
		         break;
	    case '%':printf("%d",rem);
		         break;
		case '*':printf("%d",pro);
		         break;
	     	
	}
}
