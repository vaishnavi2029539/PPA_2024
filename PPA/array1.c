#include<stdio.h>
int main()
{
    int No1 = 10;
    int No2 = 20;
    int No3 = 30;
    int No4 = 40;
    int No5 = 50;

    int Arr[5]={10,20,30,40,50};

    printf("%d\n",No4);

    printf("%d \n",Arr[3]);

    printf("size of array is %d bytes",sizeof(Arr));
    printf("value at index 5 is = %d",Arr[5]);
    return 0;
}