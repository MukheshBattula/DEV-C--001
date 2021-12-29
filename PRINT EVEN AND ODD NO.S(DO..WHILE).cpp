#include<stdio.h>
int main()
{
	int i=1,n;
	scanf("%d",&n);
	do
	{
      if(i%2==0)
      {
        printf("even no.s =%d",i);
		i++;	
	  }
	  else
	  {
	  	printf("odd no.s=%d",i);
	  	i++;
	  }
	}while(i<=n);
	
}
