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
    parent *parentptr = new parent;
    child * childptr = new child;

    parent *parentptr2 = new child; //up casting

   //  child * childptr2 = new parent;  //down casting

    return 0;

}