#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int iRet = 0;

    iRet = fork();
    if(iRet == 0)
    {
        execl("./childprocess",NULL,NULL);
        printf("PID OF PROCESS IS: %d\n",getpid());
    }
    else
    {
        printf("Parent is running with PID: %d\n",getpid());
    }
    
    return 0;
}