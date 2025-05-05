#include<iostream>
void Fun_Value(int No)
{
    No++;
    printf("value of No inside method %d \n",No);
}

void Fun_Address(int *ptr)
{
    (*ptr)++;
    printf("value of *ptr inside method %d \n",*ptr);
}

void Fun_Reference(int &ref)
{
    ref++;
}

int main()
{
    int i = 10,j = 10,k = 10;

   printf ("value of i before %d \n",i);//10
   Fun_Value(i);
   printf ("value of i after %d \n",i);//10

   printf ("value of j before %d \n",j);//10
   Fun_Address(&j);
   printf ("value of j after %d \n",j);//11

   printf ("value of k before %d \n",k);//10
   Fun_Reference(k);
   printf ("value of k after %d \n",k);//11

    return 0;
}