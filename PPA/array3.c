#include<stdio.h>
int main()
{
    //1
    int Arr[5]={10,20,30,40,50}; //declaration and initialiation

    //2
    int Brr[]={10,20,30,}; //declaration without length,initialization

    //3
    int Crr[7]={10,20,30,40}; //declaratioon,initialization with less member

    //4
    int Drr[3];//member by member initialization
    Drr[0]=10;
    Drr[1]=20;
    Drr[2]=30;
    
    const int Err[4]={1,2,3,4};
    return 0;


}