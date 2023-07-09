#include<stdio.h>
#include<fcntl.h>

int main(int argc ,char *argv[])
{
    int fd = 0;

    if(argc!=2)
    {
        printf("INSUFFICIENT ARGUMENTS....\n");
        return -1;
    }

    fd = creat(argv[1],0777);

    if(fd ==-1)
    {
        printf("UNABLE TO CREATE FILE...\n");
        return -1;
    }
    else
    {
        printf("FILE IS SUCCESSFULLY CREATED WITH FD..%d\n",fd);
    }

    return 0;
}

/////working like mkdir