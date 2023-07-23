#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>


void Fun()
{
    printf("RUNNING PROCESS PID is %d\n",getpid());
}

int main()
{
    int iRet = 0;

    iRet = fork();

    if(iRet = 0)
    {
        Fun();
    }
    else
    {
        Fun();  
    }
    return 0;
}