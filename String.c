#include<stdio.h>
int main()
{
    char str[] = {'H','e','l','l','o','\0'};
    char str2[] = "Hello";
    printf("size of str %d \n",sizeof(str));
    printf("size of str2 %d",sizeof(str2));
    return 0;
}