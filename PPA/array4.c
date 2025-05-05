#include<stdio.h>
int main(){
    int Arr[4]={10,20,30,40};
    printf("base addres of Arr is:%d \n",Arr);
    printf("base addres of Arr[0] is:%d \n",&Arr[0]);
    printf("base addres of Arr[1] is:%d \n",&Arr[1]);
    printf("base addres of Arr is[2]:%d \n",&Arr[2]);
    printf("base addres of Arr is[3]:%d \n",&Arr[3]);
    printf("element at index 4:%d \n",Arr[4]);
    printf("size of whole arr is :%d \n",sizeof(Arr));
    printf("size of array element :%d \n",&Arr[2]);

    int lengthofArray = (sizeof(Arr) / sizeof(Arr[2]));
    printf("Length of Array is : %d", lengthofArray);

    int Brr[2]={1,2};
    printf("element at index 2 :%d \n",Brr[2]);

    int Crr[2]= {10,20,30,40,50};
   
    return 0;
    
}