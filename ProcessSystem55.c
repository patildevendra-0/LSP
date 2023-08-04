#include<stdio.h>
#include<unistd.h>

void fun()
{
    printf("PID OF RUNNING PROCESS IS: %d\n",getpid());
}

int main()
{
    int iRet = 0;

    iRet = fork();
    if(iRet == 0)
    {
        fun();
    }
    else
    {
        fun();
    }


    return 0;
}