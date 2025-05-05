#include<stdio.h>
struct Demo
{
    int no;
    struct Demo *ptr;

};

int main()
{
    struct Demo obj1,obj2,obj3;
    obj1.no=10;
    obj2.no=20;
    obj3.no=30;

    obj1.ptr = &obj2;
    obj2.ptr = &obj3;
    obj3.ptr = NULL;

    printf("%d\n",)


}