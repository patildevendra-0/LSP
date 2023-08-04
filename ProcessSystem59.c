#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int iRet = 0;

    iRet = fork();
    if(iRet == 0)
    {
        execl("./ChildProcess","Demo","Hello","Marvellous",NULL);
    }
    else
    {
        printf("PARENT IS RUNNING WITH PID IS : %d\n",getpid());
    }


    return 0;
}