#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A'...'Z':   
		printf(" its a uppercasecharacter");
		break;
		case 'a'...'z':
		printf(" its a lowercasecharacter");
		break;
		case '0'...'9':
		printf("its a number");
		break;
		default: printf("special character");		           
	}
}
