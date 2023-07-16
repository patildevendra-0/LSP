#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<dirent.h>


int main(int argc ,char *argv[])
{
    DIR *dp = NULL;
    struct dirent * entry = NULL;
    char DirName[20];

    printf("ENTER THE DIRECTORY NAME :\n");
    scanf("%s",DirName);

    dp = opendir(DirName);
    if(dp == NULL)
    {
        printf("UNABLE TO OPEN DIRECTORY....\n");
        return -1;
    }

    while((entry = readdir(dp))!=NULL)
    {
        printf("%s\n",entry->d_name);
    }

    closedir(dp);

    return 0;
}