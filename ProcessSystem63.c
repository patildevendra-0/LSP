#include<stdio.h>
#include<unistd.h>
#include<sys/resource.h>

int main()
{
    int iRet = 0;

    iRet = getpriority(PRIO_PROCESS,0);
    
    printf("priority of process is %d\n",iRet);

    return 0;
}