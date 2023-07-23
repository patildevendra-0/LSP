#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>


void Fun()   // text section
{
    int iNo = 10;  //stack section

    iNo++;
    printf("RUNNING PROCESS PID is %d and value of No is %d\n",getpid(),iNo);
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