#include<stdio.h>
#include<stdlib.h>
int main()
{
    int Arr[5];  //static memory allocation
    float fvalue;
    double Brr[4];

    int isize = 0;
    int *ptr = NULL;

    printf("Enter the size of array:\n");//6
    scanf("%d",&isize);

    ptr = (int *)malloc(isize*sizeof(int));//24

    ptr[0]=0;
    ptr[1]=20;
    ptr[2]=30;
    printf("ptr ->[1] %d",ptr[1]);

    free(ptr);
  

    return 0;

}