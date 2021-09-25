#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
     /*if-else statement */
     /* find if a number is odd or even*/
     int n;
     printf("enter a number :");
     scanf("%d",&n);
     if(n % 2 ==0 )
         printf("%d is even",n);
     else
        printf("%d id odd",n);
    return 0;
}
