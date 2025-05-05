#include<stdio.h>
struct hello
{
    int no;
    float f;

};
struct Demo
{
    int i;
    float d;
    struct hello hobj1;
    struct hello hobj2;

}dobj;

int main()
{
    printf("size of Demo obj = %d\n",sizeof(dobj));
    return 0;

}
