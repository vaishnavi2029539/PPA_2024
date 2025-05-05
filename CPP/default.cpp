#include<iostream>
using namespace std;
float calculate(float marks,float outof=100)
{
    float percentages = (marks/outof)*100;
    return percentages;
}
int main()
{
    float Ans = 0.0f;
    Ans = calculate(86);
    cout<<"percentages(%) = "<<Ans<<endl;

 Ans = calculate(86,1000);
    cout<<"percentages(%) = "<<Ans<<endl;
}