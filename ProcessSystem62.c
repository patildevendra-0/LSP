#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int iRet = 0;

    iRet = fork();
    if(iRet == 0)
    {
        execl("./childProcess","NULL","NULL");
    }
    else
    {
        printf("PARENT PROCESS RUNNING WITH ID: %d\n",getpid());
    }   
    sleep(1000);


    return 0;
}