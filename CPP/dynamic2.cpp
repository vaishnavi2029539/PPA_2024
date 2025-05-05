#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j,k;

    Demo()
    {
        cout<<"inside constructor"<<endl;

    }   
    ~Demo()
    {
        cout<<"inside destructor"<<endl;
    }
    void display()
    {
        cout<<"inside display"<<endl;
    }

};

int main()
{
    Demo obj; //static memory allocation for obj
    obj.display();

    //int *ptr = (int *)malloc(5*sizeof(int));
    Demo *ptr = new Demo; //dynamic memory alloaction
    ptr->i=10;
    ptr->display();

    //free (ptr);
    delete ptr;
    return 0;


}  