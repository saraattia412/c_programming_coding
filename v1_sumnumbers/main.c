#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int num1 ,num2 ,sum;
    printf("please enter first number :");
    scanf("%d",&num1,"\n");
    printf("please enter second number :");
    scanf("%d",&num2,"\n");
    sum =num1 + num2;
    printf("the sum of %d and %d equal  %d",num1,num2,sum);
    return 0;
}
