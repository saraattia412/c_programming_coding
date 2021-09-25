#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    float num1, num2;
    char oper_;
    printf("please typed number operator number :");
    scanf("%f %c %f",&num1,&oper_,&num2);
    switch(oper_)
    {
    case '+':
        printf("solution is = %7.2f\n",num1+num2);
        break;
    case '-':
        printf("solution is = %7.2f\n",num1-num2);
        break;
    case '*':
        printf("solution is = %7.2f\n",num1*num2);
        break;
    case '/':
        printf("solution is = %7.2f\n",num1/num2);
        break;

    default:
        printf("unknown operator");
    }


    printf("------------------------------------------------\n");
    /* odd and even number between 1 : 10*/
    int number;
    printf("please enter number >= 1 && < 10 :");
    scanf("%d",&number);
    switch(number)
    {

    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
        printf("%d is odd",number);
        break;
    case 2:
    case 4:
    case 6:
    case 8:
    case 10:
        printf("%d is even",number);
        break;
    }
    return 0;
}
