#include<stdio.h>

int main()
{

float arr[]={10.5,20.2,30.5,40.6};

float *a=NULL;

float *b=NULL;

a=arr;

b=&(arr[3]);

printf("%d\n",a);

printf("%d\n",b);

printf("%f\n", *b);

printf("%f\n", *a);

printf("%f\n",*(a+2));

printf("%f\n",*(a+1));

printf("%f\n", a[1]);

printf("%f\n",*(2+arr));

printf("%f\n", 0[arr]);

printf("%f\n",b-a);

printf("%f\n",*(b-2));

return 0;
}