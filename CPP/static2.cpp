#include<iostream>
using namespace std;
class Thali
{
    public:
       int jamun;
       int rasgulla;
       static int lonch;
    //parameterized constructor with default arguments
    Thali(int jam=10,int ras=5)
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

int Thali :: lonch =111;

int main()
{
    cout<<"value of k:"<<Thali::lonch<<endl;
    
    Thali thali1;
    thali1.display();
    cout<<"size of any obj == "<<sizeof(thali1)<<endl;
    cout<<"value of lonch using object:"<<thali1.lonch<<endl;
    
    Thali thali2(25);
    thali2.display();

    Thali thali3(25,25);
    thali3.display();
    
    return 0;
}