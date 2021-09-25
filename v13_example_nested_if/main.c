#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    /* check if a number is less than 100 or not. if it less than 100 then check if it is odd or even */

    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if (n < 100)
    {
        printf("%d is less than 100\n",n);
        if(n % 2 ==0 )
            printf("%d is even",n);
        else
            printf("%d id odd",n);
    }
    else
        printf("sorry,%d is equal to or greater than 100 (%d >= 100)...",n,n);


    printf("-----------------------------------\n");
    int temp;
    printf("please type in the temp :");
    scanf("%d",&temp);
    if(temp < 30)
    {

        if (temp > 25)
            printf("nice day!.");
        else
            printf("cold day !.");
    }
    else
            printf("sure is hot!.");

    return 0;
}
