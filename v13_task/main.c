#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int degree;
    printf("please enter your degree :");
    scanf("%d",&degree);
    if(degree >= 90 && degree <= 100)
        printf("exlante!");
    else if (degree >=80 && degree <90)
        printf("very good!");
    else if (degree >=65 && degree<80)
        printf("good!");
    else if (degree >=50 && degree<65)
        printf("pass!");
    else if (degree <50)
        printf("fall!");
        return 0;
}
