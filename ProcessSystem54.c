#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int iRet  = 0;
    iRet = fork(); 

    if(iRet == 0)   //child
    {        //   1       ------------2-------------   3       paramter of execl
        execl("./myexe53","Demo","Hello","Marvellous",NULL);
    }
    else           // parent
    {
        printf("Parent is running with PID %d\n",getpid());
    }
    
    return 0;
}