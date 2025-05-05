#include<stdio.h>
void maximumNumber(int No1,int No2)
{
    if(No1>No2)
    {
        return No1;
    }else{
        return No2
    }
}

int main()
{
    int iNo1, iNo2 = 0;
    printf("enter first number \n");
    scanf("%d",&iNo1);
    printf("enter second number");
    scanf("%d",iNo2);
    int largestNumber = maximumNumber(iNo1,iNo2);
    printf("laegest number is %d \n",largestNumber);
    return 0;

}