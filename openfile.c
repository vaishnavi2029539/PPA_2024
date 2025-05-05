#include<stdio.h>
#include<fcntl.h> //file control
#include<unistd.h> //universel
int main()
{
    int fd = 0;
    fd = open("jsm.txt",O_RDWR);

    if(fd!= -1)
    {
        printf("file successfully opened with fd :%d\n",fd);
    }
    close(fd);
    return 0;
}