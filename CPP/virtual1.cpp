#include<iostream>
using namespace std;

class parent
{
    public :
        int i,j,k;
    void fun()
    {
        cout<<"inside parent fun"<<endl;
    }

};

class child : public parent
{
    public :
        int a,b;

    void gun()
    {
        cout<<"inside child gun"<<endl;
    }

};

int main()
{
    parent parentobj; //12 bytes
    child childobj; //20 bytes

    cout<<"size of parent obj"<<sizeof(parentobj)<<endl;
    cout<<"size of child obj"<<sizeof(childobj)<<endl;

    parentobj.fun();
    childobj.fun();
    childobj.gun();

    return 0;

}