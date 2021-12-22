#include<stdio.h>
int main()
{
	
	int i=1,amt,q,total,amt1=0,amt2=0,amt3=0,amt4=0;
	char ch;
    printf("your order please");
	while(i<=i+1)
	{
     scanf("%c",&ch);
     if(ch=='n')
     break;
     else if(total>=2000);
     printf("%d",&total);
     printf("you get 20 percent discount:%d",total=total-(total/5));
      switch(ch)
      {
    	case 'b':printf("BURGER\n");
    	         scanf("%d",&q);
    	         printf("would you like to order anything else");
    	        total=q*200;
				break;
    	case 'f':printf("FRIES\n");
    	         scanf("%d",&q);
    	         printf("would you like to order anything else");
    	        total=q*50; 
				break;
    	case 'p':printf("PIZZA\n");
    	         scanf("%d",&q);
    	         printf("would you like to order anything else");
    	        total=q*500;
		        break; 
        case 's':printf("SANDWICH\n");
                 scanf("%d",&q);
                 printf("would you like to order anything else");
                total=q*150;
                   break;             
	  }
    }
	 printf("the cost of ur bill %d",total);
}
