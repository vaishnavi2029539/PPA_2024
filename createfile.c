#include<stdio.h>
#include<fcntl.h> //file control
#include<unistd.h> //universel
int main()
{
    int fd = 0;
    fd = creat("jsm.txt",0777);

    if(fd!= -1)
    {
        printf("file successfully created with fd :%d\n",fd);
    }
    return 0;
}