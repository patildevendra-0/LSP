#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

#define BLOCKSIZE 1024

int main(int argc,char *argv[])
{
    int fd = 0;
    int iRet = 0;
    char Buffer[BLOCKSIZE];

    if(argc != 2)
    {
        printf("INSUFFICIENT ARGUMENTS ....\n");
        return -1;
    }

    fd = open(argv[1] ,O_RDONLY);
    if(fd == -1)
    {
        printf("UNABLE TO OPEN FILE .....\n");
        return -1;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer)))!=0)
    {
        write(1,Buffer,iRet);
    }

    close(fd);

    return 0;
}