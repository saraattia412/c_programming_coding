#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    printf("Hello world!\n");
    /*the bitwise shift operator*/
    int num1=8;
    int result;
    result= num1 >> 1;
    printf("result= %d\n",result);
    result= num1 << 1;
    printf("result= %d\n",result);
    printf("------------------------\n");
    /*ÊÔÝíÑ*/
    char ch1="k";
    char ch2="o";
    char ch3="k";
    char ch4="o";

    char nch1=-ch1;
    char nch2=-ch2;
    char nch3=-ch3;
    char nch4=-ch4;

    printf("%c%c%c%c\n",ch1,ch2,ch3,ch4);
    printf("%c%c%c%c\n",nch1,nch2,nch3,nch4);

    return 0;
}
