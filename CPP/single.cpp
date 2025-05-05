#include<iostream>
using namespace std;
class Demo //parent class
{
    public:
        int x,y;

        Demo()
        {
           cout<<"1. inside demo constructore"<<endl;
           x = 10;
           y = 20;
        }
        
        ~Demo()
        {
           cout<<"1. inside demo destructore"<<endl;
        }

        void fun()
        {
            cout<<"inside fun of Demo "<<endl;
        }
};

//child class
//
class Hello : public Demo 
{
    public:
        int a,b,c;
    Hello()
    {
        cout<<"2.inside Hello constructor "<<endl;
        a = 30;
        b = 40;
        c = 50;
    }
    ~Hello()
    {
        cout<<"2.inside Hello destructor"<<endl;
    }

    void gun()
    {
        cout<<"inside gun of Hello"<<endl;
    }

};

int main()
{
    Hello hobj;

    cout<<sizeof(hobj)<<"bytes"<<endl; //20 bytes

    cout<<hobj.x<<endl;
    cout<<hobj.y<<endl;
    cout<<hobj.a<<endl;
    cout<<hobj.b<<endl;
    cout<<hobj.c<<endl;

    hobj.fun();
    hobj.gun();


    return 0;

}