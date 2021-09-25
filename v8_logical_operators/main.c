#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    /*compound condition*/
    int mark=70;
    int result;
    result=(mark>60)&&(mark<=80);
    printf("the condition is (%d) true \n",result);
    result=(mark<=50)||(mark>=85);
    printf("the condition is (%d) false \n",result);
    return 0;
}
