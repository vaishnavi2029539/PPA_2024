#include<stdio.h>
#include<fcntl.h> //file control
#include<unistd.h>
#include<string.h>
int main()
{
    int fd = 0;
    char Arr[]="\n welcome to PPA program";

    int Ret = 0;
    fd = open("jsm.txt",O_RDWR | O_APPEND);
    Ret = write(fd,Arr,strlen(Arr)); //(konty file madhe,kay lihych,kiti lihych)
    
    printf("%d bytes successfully wriiten in the file \n",Ret);

    close(fd);
return 0;
}