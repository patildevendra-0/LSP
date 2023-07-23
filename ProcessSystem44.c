#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>


int main()
{
    int iRet = 0;

    iRet = fork();

    if(iRet == 0)
    {
        printf("Child Is Running..\n");
    }
    else
    {
        printf("Parent Is Running..\n");
    }

    return 0;
}