#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    char ch;
    int intnum=300;

    /*00000000 00000000 00000001 00101100
    Â‰·«ÕŸ  ‰Â ÂÌ«Œœ «Œ— »Ì 
    00101100*/

    long longnum;
    float floatnum;
    double doublenum;

    ch= intnum;
    printf("%d\n",ch);

    int answer;
    answer=(ch*intnum)+(ch*longnum)*(floatnum*doublenum);

    printf("%d\n",answer);

    printf("------------------------------------------------\n");


    int i1=3 ,i2=2;
    float f,f2;

    f2=i2;
    f=i1/i2;
    printf("%f\n",f);

    f2=i2;
    f=i1/f2;
    printf("%f\n",f);


    f=i1/(float) i2;
    printf("%f\n",f);



    return 0;
}
