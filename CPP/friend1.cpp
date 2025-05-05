#include<iostream>
using namespace std;
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
};
void display()
{
    Demo obj;
    cout<<"value of i::"<<obj.i<<endl;
    cout<<"value of j::"<<obj.j<<endl;
      cout<<"value of k::"<<obj.k<<endl;
}

int main()
{
    display();
    return 0;
}