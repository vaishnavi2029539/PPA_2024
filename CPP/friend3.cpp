#include<iostream>
using namespace std;
class Hello
{
    public:
    void display();
};

class Demo
{
    public: int i;
    private: int j;
    protected : int k;

    public :
     Demo()
     {
        i=1;
        j=20;
        k=30;
     }
friend void Hello::display();
};

void Hello::display()//definition
{
    Demo obj;
    cout<<"value of i::"<<obj.i<<endl;
    cout<<"value of j::"<<obj.j<<endl;//allow because display is friend  of demo class
    cout<<"value of k::"<<obj.k<<endl;
}



int main()
{
    Hello hobj;
    hobj.display();
    hobj.display();
    return 0;
}