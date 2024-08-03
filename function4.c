#include<stdio.h>

int Addition(int No1, int No2)
{  
int Sum = 0;
Sum = No1 + No2;
return Sum; 
}

int Substraction(int No1, int No2)
{  
int Sub = 0;
Sub = No1 - No2;
return Sub; 
}
int Multiplication(int No1, int No2)
{  
int Mult = 0;
Mult = No1 * No2;
return Mult; 
}

int Division(int No1, int No2)
{  
int Div = 0;
Div = No1 / No2;
return Div; 
}

int main()
{
int Value1 = 10;
int Value2 = 11;
int Ans = 0;

Ans = Addition(Value1,Value2);
printf("Addition is = %d \n",Ans);

Ans = Substraction(Value1,Value2);
printf("Substraction is = %d \n",Ans);

Ans = Multiplication(Value1,Value2);
printf("Multiplication is = %d \n",Ans);

Ans = Division(Value1,Value2);
printf("Division is = %d \n",Ans);
return 0;
}