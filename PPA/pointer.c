#include<stdio.h>
int main()
{
    char ch = 'A';
    int i = 10;
    float f = 30.4f;
    double d = 90.12345;
    
    char *chpointer = &ch;
    printf("Address of ch=%u \n",&ch);
    printf("chpointer holds the address of ch and address id %u \n",chpointer);
    printf("chpointer fetch the value from address which is stroed in it %c  \n",*chpointer);
    

    int *ipointer = &i;
    float *fpointer = &f;
    double *dpointer = &d;
    printf("the size of pointer is %d \n",sizeof(*ipointer));


    return 0;
}