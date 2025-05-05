#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int Arr[5]; //static memory allocation

    int *ptr1 = (int *)malloc(5*sizeof(int)); //dynamic memory allocation in c
    free(ptr1);//deallocation in c


    int *ptr2 = new int[5];//dynamic memory allocation in c++
    delete []ptr2; //deallocation in c++

    return 0;
}