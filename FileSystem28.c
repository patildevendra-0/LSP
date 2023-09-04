#include<stdio.h>
#include<sys/stat.h>
#include<dirent.h>

int main(int argc,char *argv[])
{
    DIR *dp = NULL;
    struct dirent * entry = NULL;
    struct stat sobj;
    char FileName[30];

    if(argc != 2)
    {
        printf("INSUFFICINET ARGUMENT..\n");
        return -1;
    }

    dp = opendir(argv[1]);
    if(dp == NULL)
    {
        printf("UNABLE TO OPEN DIRECTORY..\n");
        return -1;
    }

    while((entry = readdir(dp))!= NULL)
    {
        sprintf(FileName,"%s/%s",argv[1],entry->d_name);
        stat(FileName,&sobj);
        if(S_ISREG(sobj.st_mode))
        {
            if(sobj.st_size == 0)
            {
                printf("EMPTY FILE : %s\n",FileName);
                remove(FileName);
            }
        }
    }

    closedir(dp);
    return 0;
}