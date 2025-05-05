#include<iostream>
using namespace std;

class Demo
{
    int i;//default access specifier for i ia private

    public :
        int j;
    private :
        int k;
    protected :
        int a;
    
    public :
        Demo()
        {
            i = 10;
            j = 20;
            k = 30;
            a = 40;
        }

    void display()
    {
        cout<<"value of i :"<<i<<endl;
        cout<<"value of j :"<<j<<endl;
        cout<<"value of k :"<<k<<endl;
        cout<<"value of a :"<<a<<endl;
    }

};

class Hello: public Demo
{
    public :
        void HelloDisplay()
        {
        //cout<<"value of i :"<<i<<endl;
        cout<<"value of j :"<<j<<endl;
        //cout<<"value of k :"<<k<<endl;
        cout<<"value of a :"<<a<<endl;

        }

};

class Hello : public Demo
{
    public :
        void HelloDisplay()
        {
        //cout<<"value of i :"<<i<<endl;
        cout<<"value of j :"<<j<<endl;
        //cout<<"value of k :"<<k<<endl;
        cout<<"value of a :"<<a<<endl;

        }

};

int main()
{
   Hello hobj;
   hobj.display();
   hobj.HelloDisplay();
return 0;
}