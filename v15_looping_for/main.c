#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    /* print number 0 :9*/
    int count;
    for(count=0;count<10;count++)
    {
        printf("%d\n",count);
    }
    printf("-----------------------------------------------\n");


    /*sum 10 of numbers */
    int i, value,sumofnumbers=0;
    for(i=1;i<=10;i++)
    {
        printf("enter value [%d] : ",i);
        scanf("%d",&value);
        sumofnumbers=sumofnumbers+value;
    }
    printf("the sum of numbers = %d\n",sumofnumbers);


    printf("-----------------------------------------------\n");

    /*nested for */
    /* multiplication taple */
    for(int k=1;k<=12;k++)//row
    {
        for(int j=1;j<=12;j++)//col
        {
            printf("%d  *  %d =  %d \n",k,j,k * j);
        }
        printf("end\n");
    }
    printf("-----------------------------------------------\n");

    /* break statement */
    /*sum 10 numbers && stop sum if enter 0 */

    int sum=0;
    for(int x=0;x<=10;x++)
    {
        printf("enter value you want :");
        scanf("%d",&value);
        sum = sum + value;

        if(value == 0)
        {
            printf("sorry , 0 end the program..!\n");
            break;
        }
    }
    printf("the sum of numbers = %d\n",sum);

    printf("-----------------------------------------------\n");

    /* continue statement */
    /* sum of odd numbers 1 :10 */

    int sum_odd=0;
    for(int y = 0;y<=10;y++)
    {
        if(y % 2 == 0)
        {
            continue;
        }
        sum_odd=sum_odd+y;
    }
    printf("sum of odd numbers = %d\n",sum_odd);


    printf("-----------------------------------------------\n");


    return 0;
}
