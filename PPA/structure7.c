#include<stdio.h>
struct Demo
{
    int i;
    float f;
    int j;
};
int main()
{
    struct Demo obj1;
    struct Demo obj2;

    struct Demo *ptr = NULL;
    ptr = &obj2;

    obj1.i=10;//direct access
    obj1.f=20;
    obj1.j=30;

    ptr->i=40;//indirect access using arrow operator
    ptr->f=50;
    ptr->j=60;

    printf("obj1.i %d\n",obj1.i);
    printf("onj2.i %d\n",obj2.i);
    printf("ptr->i%d\n",ptr->i);

return 0;


}
