#include<stdio.h>
void display()//shop
{
    printf("inside display function...\n");
   
}

int main()//home
{

    printf("inside main functon..\n");
    display();//function call
    return 0;
}