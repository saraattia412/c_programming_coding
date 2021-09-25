#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int num=0;
    do
    {
        printf("the value is %d \n",num);
        num++;
    }
    while(num <= 3);
    printf("---------------------------------------\n");

    //Fibonacci  series

     int f1=-1 , f2=1 ,f;

     int n;
     printf("how many number of Fibonacci series  :");
     scanf("%d",&n);


     do
     {
       f=f1+f2;
       printf("%d , ",f);
       f1=f2;
       f2=f;

       n--;
     }while(n >= 1);

    printf("\n---------------------------------------\n");



    return 0;
}
