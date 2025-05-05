#include<stdio.h>
#include<stdbool.h>

int main()
{
    char ch = 'A';
    int i = 21;
    float f = 12.345f;
    double d = 89.987;
    bool isfalse = true;
    printf("size of character is :%d byte \n",sizeof(ch));
    printf("size of character is :%d byte \n",sizeof(i));
    printf("size of character is :%d byte \n",sizeof(f));
    printf("size of character is :%d byte \n",sizeof(d));
    printf("size of character is :%d bit \n",sizeof(isfalse));

    printf("Base address of character is:%u \n",&ch);
    printf("Base address of character is:%u \n",&i);
    printf("Base address of character is:%u \n",&f);
    printf("Base address of character is:%u \n",&d);
    return 0;

}