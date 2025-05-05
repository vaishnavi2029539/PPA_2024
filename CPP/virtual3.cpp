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

    void gun()
    {
        cout<<"inside parent gun"<<endl;
    }

    void sun()
    {
        cout<<"inside parent sun"<<endl;
    }
    void run()
    {
        cout<<"inside parent run"<<endl;
    }

};

class child : public parent
{
    public :
        int a,b;

    void gun() //redefinaton
    {
        cout<<"inside child gun"<<endl;
    }
    void run() //redefination
    {
        cout<<"inside child run"<<endl;
    }
};

int main()
{
    parent *ptr = new child; //up casting
    ptr->fun();
    ptr->gun();
    ptr->sun();
    ptr->run();

    return 0;

}