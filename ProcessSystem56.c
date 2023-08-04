#include<stdio.h>
#include<unistd.h>


void fun()
{
    int iNo = 10;

    iNo++;
    printf("PID OF RUNNING PROCESS IS:%d AND VALUE IS: %d\n",getpid(),iNo);
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