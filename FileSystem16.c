#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>


int main(int argc ,char *argv[])
{
    struct stat sobj;

    if(argc!=2)
    {
        printf("INSUFFICIENT ARGUMENT....\n");
        return -1;
    }

    stat(argv[1],&sobj);

    printf("FILE NAME: %s\n",argv[1]);
    printf("FILE SIZE:%d\n",sobj.st_size);
    printf("NUMBER OF LINKES: %d\n",sobj.st_nlink);
    printf("INODE NUMBER:%d\n",sobj.st_ino);
    printf("FILESYSTEM NUMBER: %d\n",sobj.st_dev);
    printf("NUMBER OF BLOCK: %d\n",sobj.st_blocks);

    return 0;
}