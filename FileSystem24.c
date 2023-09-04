#include<stdio.h>
#include<dirent.h>

int main(int argc,char *argv[])
{   
    char FilePath[30];

    DIR *dp = NULL;
    struct dirent *entry = NULL;

    if(argc !=2)
    {
        printf("INSUFFICIENT ARGUMENTS..\n");
        return -1;
    }

    dp = opendir(argv[1]);
    if(dp == NULL)
    {
        printf("UNABLE TO OPEN DIRECTORY...\n");
        return -1;
    }

    while((entry = readdir(dp))!=NULL)
    {
        sprintf(FilePath,"%s/%s",argv[1],entry->d_name);
        printf("%s\n",FilePath);
    }

    return 0;
}