#include <stdio.h>
int count ( number);
int main()
{
    int number;
    int count=0;
     
    printf("Enter a positive integer number: ");
    scanf("%d",&number);
     
    count=count(number);
     
    printf("Total digits in number %d is: %d\n",number,count);
     
    return 0;
}

