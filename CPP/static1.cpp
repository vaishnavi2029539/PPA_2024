#include<iostream>
using namespace std;
class Thali
{
    public:
       int jamun;
       int rasgulla;

    Thali(int jam=10,int ras=5)//parameterized constructor with default arguments
    {
       jamun=jam;
       rasgulla= ras;
    }

    void display()
    {
        cout<<"jamun="<<jamun<<endl;
        cout<<"rasgulla"<<rasgulla<<endl;
        cout<<"-----------"<<endl;
    }
};

int main()
{
    Thali thali1;
    thali1.display();

    Thali thali2(25);
    thali2.display();

    Thali thali3(25,25);
    thali3.display();
    
    return 0;
}