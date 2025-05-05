#include<stdio.h>
int main()
{

    int Arr[5]={10,20,30,40,50};
    int *ptr = Arr;
    int *ptr2 = &(Arr[4]);

    int Ans = 0;
    
    //Addition of ptr+no
    printf("ptr before addition = %u \n",ptr);
    ptr = ptr + 2;
    printf("ptr after addition = %u \n",ptr);
    
    //Addition of ptr+ptr : not allow

    //substractiion of no from ptr(ptr-no)
    printf("ptr before substraction = %u \n",ptr);
    ptr = ptr - 1;
    printf("ptr after substraction = %u \n",ptr);

    //substraction of two pointer
    printf("ptr2 before substraction = %u \n",ptr2);
    Ans = ptr - ptr2;
    printf("ptr2 after substraction = %u \n",ptr2);





    return 0 ;

}