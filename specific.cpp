#include<iostream>
using namespace std;
int Addition(int no1,int no2)
{
    int ans = 0;
    ans = no1 + no2;
    return ans;
}

int AdditionF(float no1,float no2)
{
    float ans = 0.0;
    ans = no1 + no2;
    return ans;
}

int AdditionD(double no1,double no2)
{
    double ans = 0.0;
    ans = no1 + no2;
    return ans;
}

int main()
{int iRet = 0;
float fRet = 0.0f;
double dRet = 0.0;

iRet = Addition(10,20);
dRet = AdditionD(50.0,60.0);
fRet = AdditionF(30.0f,40.0f);

cout<<iRet<<endl;
cout<<dRet<<endl;
cout<<fRet<<endl;

}