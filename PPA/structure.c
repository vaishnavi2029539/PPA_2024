#include<stdio.h>
struct Demo 
{
    int no;
    float f;
    int x;
    float d;

}strobj; //object creation at time of declaration, memory allocated

int main()
{
    struct Demo obj;
    obj.no=10;
    obj.f=10.5f;
    obj.x=20;
    obj.d=20.5;
    printf("sizeof(Demo) is structure is = %d \n ",sizeof(obj));

    struct Demo obj2;
    obj2.no=20;
    obj2.f=20.5f;
    obj2.x=30;
    obj2.d=30.5;
    printf("sizeof(obj2) is structure is = %d \n ",sizeof(obj2));

    strobj.no=1;
    strobj.f=50.5f;
    strobj.x=110;
    strobj.d=110.5;
    printf("sizeof(Demo) is structure is = %d \n ",sizeof(obj));
     

    struct strobj3 = {2,60.5f,700,700.5};
}