#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<float.h>
int main()
{
    printf("Hello world!\n");
    printf("range of char %d to %d \n",SCHAR_MIN,SCHAR_MAX);
    printf("range of unsigned char 0 to %d \n",UCHAR_MAX);
    printf("range of signed short int %d to %d \n",SHRT_MIN,SHRT_MAX);
    printf("range of unsigned short int 0 to %d \n ",USHRT_MAX);
    printf("range of signed int %d to %d \n",INT_MIN,INT_MAX);
    printf("range of unsigned int 0 to %lu \n",UINT_MAX);
    printf("range of signed long int %ld to %ld \n",LONG_MIN,LONG_MAX);
    printf("range of unsigned long int 0 to %lu \n,",ULONG_MAX);
    printf("range of float %e to %e \n",FLT_MIN,FLT_MAX);
    printf("range of double %e to %e \n ",DBL_MIN,DBL_MAX);
    return 0;
}
