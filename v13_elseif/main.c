#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    /* calculetar*/
    float num1, num2;
    char oper_;
    printf("please typed number operator number :");
    scanf("%f %c %f",&num1,&oper_,&num2);
    if (oper_ == '+')
        printf("solution is = %7.2f\n",num1+num2);
    else if (oper_ == '-')
        printf("solution is = %7.2f\n",num1-num2);
    else if (oper_ == '*')
        printf("solution is = %7.2f\n",num1*num2);
    else if (oper_ == '/')
        printf("solution is = %7.2f\n",num1/num2);
    else
        printf("operator is false!");




    return 0;
}
