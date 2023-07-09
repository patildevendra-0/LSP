#include<stdio.h>
#include<fcntl.h>

int main(int argc ,char *argv[])
{

    int fd = 0;

    if(argc != 2)
    {
        printf("INSUFFICIENT ARGUMENTS...\n");
        return -1;
    }

    fd = open(argv[1],O_RDONLY);

    if(fd == -1)
    {
        printf("UNBALE TO OPEN FILE ...\n");
        return -1;
    }
    else
    {
        printf("FILE IS SUCCESSFULLY OPEN WITH FD :%d\n",fd);
    }

    return 0;
}