#include<stdio.h>
int main()
{
    int i = 10;
    signed int j = 20;//+ve
    signed int k = -30;//-ve
    unsigned int a = 40; //only +ve

    printf("%d \n",i);
    printf("%d \n",j);
    printf("%d \n",k);
    printf("%d \n",a);

    int x = 10;//4 byte
    short int y = 10;//2 bytes
    long int z = 20;//4 bytes
    printf("%d \n",sizeof(x));
    printf("%d \n",sizeof(y));
    printf("%d \n",sizeof(z));

    return 0;
}