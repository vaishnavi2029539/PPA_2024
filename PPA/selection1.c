#include<stdio.h>
int main()
{
    int No = 0;
    int Remainder = 0;

    printf("Enter a number: \n");
    scanf("%d",&No);
    Remainder = No%2;

    if(Remainder==0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
    return 0;
}