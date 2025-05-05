#include<stdio.h>
int main()
{
    int i = 1;//loop counter variable
    int count = 0;//user input

    printf("Enter the number of times you want to display JAY GANESH on screen \n");
    scanf("%d",&count);

    while(i<=count)
    {
        printf("%d.jay ganesha...\n",i);
        i++;
    }
return 0;
}