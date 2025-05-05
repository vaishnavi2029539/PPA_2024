#include<stdio.h>
int main()
{
    char ch ='A';
    int i = 10;
    float f = 10.5f;
    double d = 40.40;

    //specific pointer
    char *cp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;

    printf("%c\n",*cp);
    printf("%d\n",*ip);
    printf("%f\n",*fp);
    printf("%f\n",*dp);

    //generic pointer
    void *vp = NULL;
    vp = &ch;
    printf("%c\n",*cp);//A
    printf("%c\n",*(char *)cp);
    
    vp = &i;
    printf("%d\n",*ip);

    vp = &f;
    printf("%f\n",*fp);

    vp = &d;
    printf("%f\n",*dp);

}