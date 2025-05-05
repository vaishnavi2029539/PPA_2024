#include<iostream>
using namespace std;
class Arithmatic
{
    public:
       int Addition(int no1,int no2)
    {
       int Ans = 0;
       int Result = no1+no2;
       return Result;
    }

     int Addition(int no1,int no2,int no3)
    {
       int Ans = 0;
       int Result = no1+no2+no3;
       return Result;
    }

       float Addition(float no1,float no2)
    {
       float Ans = 0;
       float Result = no1+no2;
       return Result;
    }

     float Addition(float no1,float no2,float no3)
    {
       float Ans = 0;
       float Result = no1+no2+no3;
       return Result;
    }
};
int main()
{
    Arithmatic obj1;//default constructor involked internally
    int ans = 0;
    ans = obj1.Addition(10,20);
    cout<<"10+20 = "<<ans<<"\n";
    ans = obj1.Addition(10,20,30);
    cout<<"10+20+30 = "<<ans<<"\n";
    ans = obj1.Addition(10.5f,20.5f);
    cout<<"10.5f+20.5f = "<<ans<<"\n";
    obj1.Addition(10.5f,20.5f,30.5f);
}