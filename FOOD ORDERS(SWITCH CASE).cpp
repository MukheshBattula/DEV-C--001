#include<stdio.h>
int main()
{
	char ch;
	int amt1,amt2,amt3,amt4,q1,q2,q3,q4,total;
	printf("pizza \n burger\n fries\n sandwich\n");
    scanf("%c%d%c%d%c%d%c%d",&ch,&q1,&ch,&q2,&ch,&q3,&ch,&q4);
   amt1=q1*200;
   amt2=q2*50; 
   amt3=q3*500; 
   amt4=q4*150; 
    switch(ch)
    {
    	case 'b':printf("BURGER\n");
    	         
				  break;
    	case 'f':printf("FRIES\n");
    	       
    	         break;
    	case 'p':printf("PIZZA\n");
		          
				  break; 
        case 's':printf("SANDWICH\n");
                   break;
	             
	}
 total=amt1+amt2+amt3+amt4;
	 printf("the cost of ur bill %d",total);
}
