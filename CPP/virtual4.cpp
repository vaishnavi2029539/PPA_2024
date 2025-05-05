#include<iostream>
using namespace std;

class parent
{
    public :
        int i,j,k;
    virtual void fun() //1000
    {
        cout<<"inside parent fun"<<endl;
    }

    virtual void gun() //defenetion //2000
    {
        cout<<"inside parent gun"<<endl;
    }

    void sun() //3000
    {
        cout<<"inside parent sun"<<endl;
    }
    void run() //dfenetion /4000
    {
        cout<<"inside parent run"<<endl;
    }

};

class child : public parent
{
    public :
        int a,b;

    virtual void gun() //redefinaton 5000
    {
        cout<<"inside child gun"<<endl;
    }
    void run() //redefination 6000
    {
        cout<<"inside child run"<<endl;
    }
    virtual void mun() //7000
    {
        cout<<"inside child mun"<<endl;
    }
};

int main()
{
    cout<<"size of parent"<<sizeof(parent)<<endl;
    cout<<"size of child"<<sizeof(child)<<endl;
    parent *ptr = new child; //up casting
    ptr->fun();
    ptr->gun();
    ptr->sun();
    ptr->run();

    return 0;

}