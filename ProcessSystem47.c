#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>


int main()
{
    
    /// it is wrong way to call the fork system call 
    
    fork();
    printf("HELLO WORLD..%d\n",getpid());
    return 0;
}