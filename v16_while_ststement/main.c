#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");


    int count=1;
    while(count <= 4)
    {
        printf("%d \n",count);
        count++;
    }
    printf("--------------------------------\n");

    char ch;
    while((ch=getch()) != 27)
    {
        printf("you press %c with ASCII code %d  \n",ch,ch);
    }
    printf("--------------------------------\n");


    float num,sum=0;
    int counter=1;
    printf("please enter values terminated by 0 to stop : \n");
    printf("value number: %d:  ",counter);

    scanf("%f",&num);
    while(num != 0)
    {
        sum += num;
        counter ++;
        printf("value number: %d:  ",counter);
        scanf("%f",&num);

    }
    printf("the sum of %d numbers = %.2f \n",--counter,sum);
    printf("--------------------------------\n");


    return 0;
}
