.#include<stdio.h>
int main()
{
	char x1,a,e,i,o,u;
	scanf("%c",&x1);
	switch(x1)
	{
		case 'a':
	    case 'e':
	    case 'i':
	    case 'o':
		case 'u':printf("its a vowel");
		          break;
		default: printf("its a consonant");		  	
	}
}
