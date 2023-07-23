#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>


int main()
{
    
    int PID = 0;
    int PPID = 0;

    PID = getpid();
    PPID = getppid();

    printf("PROCESS PID :%d\n",PID);
    printf("PROCESS PARENT ID : %d\n",PPID);

    return 0;
}