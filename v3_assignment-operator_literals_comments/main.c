#include <stdio.h>
#include <stdlib.h>
typedef unsigned char pyte;
int main()
{
    printf("Hello world!\n");
    //assignment operator :
    int x1=10;
    int x2=15;
    int sum = x1 +x2;
    printf("sum = %d \n",sum);
    float avg;
    avg=(x1+x2)/2.0f;
    printf("average of number  is equal %f \n",avg);
    /*renaming data type */
    pyte var1;
    var1=79;
    printf("%c",var1);
    return 0;
}
