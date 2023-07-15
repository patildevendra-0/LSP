#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>


int main(int argc ,char *argv[])
{
    int fd = 0;
    struct stat sobj;

    if(argc!=2)
    {
        printf("INSUFFICIENT ARGUMENT....\n");
        return -1;
    }

    fd = open(argv[1],O_RDONLY);
    if(fd == -1)
    {
        printf("UNABLE TO OPEN FILE.....\n");\
        return -1;
    }
    fstat(fd,&sobj);

    printf("FILE NAME: %s\n",argv[1]);
    printf("FILE SIZE:%d\n",sobj.st_size);
    printf("NUMBER OF LINKES: %d\n",sobj.st_nlink);
    printf("INODE NUMBER:%d\n",sobj.st_ino);
    printf("FILESYSTEM NUMBER: %d\n",sobj.st_dev);
    printf("NUMBER OF BLOCK: %d\n",sobj.st_blocks);

    return 0;
}