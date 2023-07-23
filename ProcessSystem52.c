#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int iRet  = 0;
    iRet = fork(); 

    if(iRet == 0)   //child
    {
        execl("./myexe51",NULL,NULL);
    }
    else           // parent
    {
        printf("Parent is running with PID %d\n",getpid());
    }
    
    return 0;
}