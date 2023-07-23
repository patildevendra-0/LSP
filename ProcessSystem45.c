#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>


int main()
{
    int iRet = 0;
    int PID = 0;
    
    iRet = fork();

    if(iRet == 0)
    {
        printf("Child Is Running..\n");
        printf("Child Says: PID of parent .%d\n",getppid());
        printf("Child Says: PID of child %d\n",getgid());

    }
    else
    {
        printf("Parent Is Running..\n");
        printf("Parent Says PID of chile process is :%d\n",iRet);
        printf("PARENT Says :PID of parent process is: %d\n",getgid());
        printf("Parent says :PID of parent process of parent i.e terminal is:%d\n",getppid());

    }

    return 0;
}