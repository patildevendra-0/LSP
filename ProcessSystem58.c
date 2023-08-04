#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc ,char *argv[])
{
    printf("PID IS: %d\n",getpid());
    printf("%s %s %s ",argv[0],argv[1],argv[2]);

    return 0;
}