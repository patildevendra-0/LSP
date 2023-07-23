#include<stdio.h>
#include<stdlib.h>
#include<dlfcn.h>


int main()
{
    void *ptr = NULL;
    void (*fptr)();

    ptr = dlopen("/home/devendra/Desktop/LSP/Dynamic/library.so",RTLD_LAZY);
    if(ptr == NULL)
    {
        printf("UNABLE TO LOAD LIBRARY....");
        return -1;
    }

    fptr = dlsym(ptr,"Display");
    if(fptr == NULL)
    {
        printf("UNABLE TO LOAD ADRESS OF FUNCTION..\n");
        return -1;
    }

    fptr();
    
    return 0;
}