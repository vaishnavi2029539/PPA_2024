#include<stdio.h>
void Fun()
{
    static int i = 10;
    i++;
    printf("value of i %d\n",i);

}

int main()
{
    int no = 50;
    Fun();
    Fun();
    Fun();
    return 0;
}