#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Hello world!\n");

/* one way branche */
    int x=20, y=30;
    if(x<y)
        printf("the condition is true\n");


    char ch;
    ch=getche();
    if(ch=='y')
        printf("\nyou typed y\n");

    /* multiple statments with if */


    printf("\n----------------------------------\n");

    if(ch=='y')
        printf("\nyou typed y\n");
    else
        printf("\n you did not typed y\n");

    printf("----------------------------------\n");
    int num1=9;
    int num2=50;

    if(num2>num1)
    {
        printf("the condition is true\n");
        printf("because : num2 > num1\n");
    }

    printf("---------------------------------\n");

    int n;
    printf("enter a number less than 10:");
    scanf("%d",&n);
    if(n<10)
    {
        printf("%d is less than 10 \n",n);
        printf("square =%d \n ",n*n);
    }

    printf("---------------------------------\n");


    return 0;
}
