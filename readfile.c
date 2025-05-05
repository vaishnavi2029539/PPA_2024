#include<stdio.h>
#include<fcntl.h> //file control
#include<unistd.h>
#include<string.h>
int main()
{
    int fd = 0;
    char Arr[20];

    int Ret = 0;
    fd = open("jsm.txt",O_RDWR);
    Ret = read(fd,Arr,20); //(konty file read,kashat ghych,kiti ghych)
    
    printf("%d bytes successfully read from the  file \n",Ret);

    printf("data read from the file  is: \n %s",Arr);
    close(fd);
return 0;
}