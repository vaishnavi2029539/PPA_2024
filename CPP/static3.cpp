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
        cout<<"inside non-static function display()"<<endl;
        cout<<"jamun="<<jamun<<endl;
        cout<<"rasgulla"<<rasgulla<<endl;
        cout<<"lonch="<<lonch<<endl;
        cout<<"-----------"<<endl;
    }

    static void showlonch()
    {
        cout<<"inside static function showlonch()"<<endl;
        cout<<"lonch="<<lonch<<endl;
    }
};

int Thali :: lonch =111;

int main()
{
    cout<<"value of k:"<<Thali::lonch<<endl;
    Thali::showlonch();

    Thali thali1;
    thali1.display();
    cout<<"size of any obj == "<<sizeof(thali1)<<endl;
    cout<<"value of lonch using object:"<<thali1.lonch<<endl;
    thali1.showlonch();

    Thali thali2(25);
    thali2.display();

    Thali thali3(25,25);
    thali3.display();
    
    return 0;
}