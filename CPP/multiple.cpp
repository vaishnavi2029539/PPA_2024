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

class Hello 
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

class JSM : public Demo, public Hello
{
    public :
        int  p;

    JSM()
    {
        cout<<"3. inside JSM constructor" <<endl;
        p = 60;
    }

    ~JSM()
    {
        cout<<"3. inside JSM destructor"<<endl;
    }
    
    void sun()
    {
        cout<<"inside sun of JSM"<<endl;
    }
};

int main()
{
    JSM jsmobj;

    cout<<sizeof(jsmobj)<<"bytes"<<endl; //20 bytes

    cout<<jsmobj.x<<endl;
    cout<<jsmobj.y<<endl;
    cout<<jsmobj.a<<endl;
    cout<<jsmobj.b<<endl;
    cout<<jsmobj.c<<endl;
    cout<<jsmobj.p<<endl;

    jsmobj.fun();
    jsmobj.gun();
    jsmobj.sun();


    return 0;

}