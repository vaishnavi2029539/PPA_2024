#include<stdio.h>
int main()
{
    int standard = 0;
    printf("Enter your standard \n");
    scanf("%d",&standard);

if(standard==1)
{
    printf("your exam is at 1 PM \n");
}
else if(standard==2){
     printf("your exam is at 2 PM \n");
}
else if(standard==3){
    printf("your exam is at 3 PM \n");
}
else if(standard==4){
    printf("your exam is at 4 PM \n");
}
else{
    printf("Invalid/Wrong standard");
}
return 0;
}