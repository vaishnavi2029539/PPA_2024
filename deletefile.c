#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
int main()
{
    int fd = unlink("jsm.txt");
    printf("file deleted %d",fd);
    return 0;
}