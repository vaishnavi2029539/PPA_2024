#include<stdio.h>
void displayExamTime(int iStandard)
{
    if(iStandard<=0 || iStandard>5){
        printf("wrong input");
    }else if (iStandard == 1){
        printf("your exam is at 8 AM \n");
    }else if (iStandard == 2){
        printf("your exam is at 9 AM \n");
    }else if (iStandard == 3){
        printf("your exam is at 10 AM \n");
    }else if (iStandard == 4){
        printf("your exam is at 11 AM \n");
    }else if (iStandard == 5){
        printf("your exam is at 12 AM \n");
    }



}

int main()
{
    int iStandard=0;
    printf("Enter your standard \n");
    scanf("%d",&iStandard);
    displayExamTime(iStandard);
    return 0;
}