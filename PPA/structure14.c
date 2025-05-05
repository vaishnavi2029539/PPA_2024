#include<stdio.h>
union Demo
{
    int i;
    char ch;
    float f;
    double d;
};

int main()
{
    union Demo obj1;
    printf("size of Demo union object = %d\n",sizeof(obj1));
    return 0;
}