#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int fd = 0;
    int iRet = 0;
    char *Buffer = NULL;

    if(argc!=3)
    {
        printf("INSUFFICIENT ARGUMENT....\n");
        return -1;
    }

    fd = open(argv[1], O_RDONLY);
    if(fd == -1)
    {
        printf("UNABLE TO OPEN FILE ....\n");
        return -1;
    }

    Buffer = (char *)malloc(sizeof(atoi(argv[1])));

    iRet = read(fd,Buffer,atoi(argv[2]));
    printf("DATA FROM THE FILE: %s\n",Buffer);

    return 0;
}