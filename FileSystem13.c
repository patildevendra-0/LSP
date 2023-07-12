#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>


int main(int argc ,char *argv[])
{
    int fd = 0;
    int iRet = 0;
    char *Buffer = NULL;
    int iSize = 0;

    if(argc != 3)
    {
        printf("INSUFFICIENT ARGUMENTS.....\n");
        return -1;
    }

    fd = open(argv[1],O_RDONLY);
    if(fd == -1)
    {
        printf("UNABLE TO OPEN FILE .....\n");
        return -1;
    }

    iSize = atoi(argv[2]);
    Buffer = (char *)malloc(sizeof(iSize));

    iRet = read(fd,Buffer,iSize);
    if(iRet == 0)
    {
        printf("UNABLE TO READ DATA FROM FILE ....\n");
        return -1;
    }
    write(1,Buffer,iRet);


    return 0;
}