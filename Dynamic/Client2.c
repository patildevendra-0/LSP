#include<stdio.h>
#include<stdlib.h>
#include<dlfcn.h>

int main()
{
    void *ptr = NULL;
    int (*fptr)(int,int);

    int iNo1 = 20;
    int iNo2 = 20;
    int iRet = 0;

    ptr = dlopen("/home/devendra/Desktop/LSP/Dynamic/library.so",RTLD_LAZY);
    if(ptr == NULL)
    {
        printf("UNABLE TO LOAD LIBRARY..\n");
        return -1;
    }
    
    fptr = (int(*)(int,int))dlsym(ptr,"Multiplication");
    if(fptr == NULL)
    {
        printf("UNABLE TO LOAD FUNCTION ADRESSS..\n");
        return -1;
    }

    iRet = fptr(iNo1,iNo2);
    printf("MULTIPLIACTION IS: %d\n",iRet );


    return 0;
}