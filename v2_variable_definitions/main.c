#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
void main(void)
{
    printf("Hello world!\n");
    unsigned char ch;/*range :  -128:127*/
    int number;
    float salary;
    double distance;

    number=0;
    ch=200;
    salary=500.55;
    distance=123654789.5945555555555555555;

    printf("minmum of value int %d and max %d \n",INT_MIN,INT_MAX);
    printf("%d \n",number);
    printf("%c  \n",ch);
    printf("%f \n",salary);
    printf("%lf \n",distance);
    printf("size of number is %d bytes" ,sizeof(number));

    return 0;
}
