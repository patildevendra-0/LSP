#include<stdio.h>

int main(int argc ,char *argv[])
{
    printf("NAME OF APPLICATION:%s\n",argv[0]);

    if(argc!=2)
    {
        printf("INSUFFICIENT ARGUMENTS...\n");

        return -1;
    }
    else
    {
        printf("WELCOME TO MARVELLOUS - %s\n",argv[1]);
    }

    return 0;
}