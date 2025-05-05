#include<stdio.h>
int i;
int j = 11;
extern int no;
int main()
{
    printf("value of i : %d",i);
    printf("value of i : %d",j);
    printf("value of i : %d",no);
    return 0;

}