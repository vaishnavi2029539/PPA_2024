#include<iostream>
using namespace std;
int main()
{
    int no = 11;
    int &noref= no;

    int Rahul = 99;
    int &pappu=Rahul;
    
    int *ptr = &no;
    int *(&ptrref) = ptr;

    cout<<"no::"<<no<<"\n";//11
    cout<<"noref::"<<noref<<"\n";//11

    cout<<"&no::"<<&no<<"\n";
    cout<<"&noref"<<&noref<<"\n";

    cout<<"*ptr::"<<*ptr<<"\n";
    cout<<"*ptrref::"<<*ptrref<<"\n";

    no++;
    cout<<"no::"<<no<<"\n";
    cout<<"noref::"<<noref<<"\n";


return 0;


}