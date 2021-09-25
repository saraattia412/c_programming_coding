#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int x , z, y;
    x=10;
    /*x++;*/
    /*x=x+1*/
    /*x += 1*/
    z=++x;
    y=x++;
    printf("x= %d z= %d y= %d \n",x,z,y);
    return 0;
}
