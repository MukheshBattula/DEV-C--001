#include<stdio.h>
int main()
{
	int m;
	printf("enter marks between 0 -100");
	scanf("%d",&m);
	switch(m/10)
	{
		case 9:
			printf("A grade");
			break;
		case 8:
			printf("B grade");
			break;
		case 7:
			printf("C grade");
			break;
		case 6:
			printf("D grade");
			break;
		case 5:
			printf("E grade");
			break;
		default:
		printf(" fail ");
	}
}
