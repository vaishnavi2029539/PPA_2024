#include<iostream>
using namespace std;
class Demo
{
    public : int i,j;

    Demo(int a=10, int b=20)
    {
        i=a;
        j=b;

    }
};

Demo operator + (Demo op1, Demo op2)
{
    return Demo(op1.i+op2.i,op1.j+op2.j);
}

int main()
{
    Demo obj1(10,20);
    Demo obj2(30,40);
    Demo obj3(0,0);

    obj3 = obj1 + obj2;
    cout<<"after addition obj3.i"<<obj3.i<<endl;
     cout<<"after addition obj3.j"<<obj3.j;
}