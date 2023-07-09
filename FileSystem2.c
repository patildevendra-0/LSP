#include<stdio.h>

int main(int argc ,char *argv[])
{
    if(argc != 2)
    {
        printf("INSUFFICENT ARGUMENT.. \n");
        return -1;
    }
    else
    {
        printf("WELCOME TO LSP WORLD -  %s\n",argv[1]);
    }   

    return 0;
}