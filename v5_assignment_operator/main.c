#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    /* compound assignment */
    int number;
    int salary;
    number=20;
    salary=500;
    /*salary=salary+number;*/salary += number;/*520*/
    salary += number;/*540*/
    salary += number;/*560*/
    salary += number;/*580*/
    printf("final salary = %d\n",salary);
    return 0;
}
