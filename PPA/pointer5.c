#include<stdio.h>
int main()
{
    int a = 10;
    int *ptr = &a;
    printf("ptr = %u\n",ptr);
    ptr++;
    printf("ptr = %u\n",ptr);
    ptr--;
    printf("ptr = %u\n",ptr);


    char ch = 'A';
    char *chptr = &ch;
    printf("chptr = %u\n",chptr);
    chptr++;
    printf("chptr = %u\n",chptr);
    chptr--;
    printf("chptr = %u\n",chptr);

    return 0;
}
