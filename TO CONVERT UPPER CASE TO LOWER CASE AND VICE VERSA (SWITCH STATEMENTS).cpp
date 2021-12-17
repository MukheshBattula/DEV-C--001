#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A'...'Z':   
		printf(" its a uppercasecharacter\n");
		 ch=ch+32;
		 printf("converted character %c",ch);
		break;
		case 'a'...'z':
		printf(" its a lowercasecharacter");
		ch=ch-32;
		printf("converted character %c",ch);
		break;
		case '0'...'9':
		printf("its a number");
		break;
		default: printf("special character");		           
	}
}
