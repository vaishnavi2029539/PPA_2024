#include<iostream>
using namespace std;
void display (int i, const int j)
{
    int a = 10;
    const int b = 20;
    i++;
    a++;
}
int main()
{
    display(1,2);
    return 0;
}