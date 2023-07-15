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

    if(S_ISREG(sobj.st_mode))
    {
        printf("FILE IS REGULAR FILE..\n");
    }
    else if(S_ISDIR(sobj.st_mode))
    {
        printf("FILE IS DIRECTOYR FILE..\n");
    }
    else if(S_ISLNK(sobj.st_mode))
    {
        printf("IT IS SYMBOLIC LINK..\n");
    }

    return 0 ;
}