#include<stdio.h>
#include<sys/stat.h>
#include<dirent.h>

int main(int argc ,char *argv[])
{

    DIR *dp = NULL;
    struct dirent * entry = NULL;
    struct stat sobj;

    if(argc != 0)
    {
        printf("INSUFFICIENT ARGUMENTS..\n");
        return -1;
    }

    while((entry = opendir(dp))!= NULL)
    {
        
    }



    return 0;
}