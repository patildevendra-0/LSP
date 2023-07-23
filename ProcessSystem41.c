#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    int PID = 0;

    PID = getpid();
    printf("PID OF RUNNING PROCESS Is:%d\n",PID);
    return 0;
}