#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<dirent.h>

int main(int argc ,char *argv[])
{
    DIR *dp = NULL;
    struct dirent *entry = NULL;
    char DirName[20];
    char Name[30];

    printf("ENTER THE DIRECTORY NAME: \n");
    scanf("%s",DirName);

    dp = opendir(DirName);
    if(dp ==NULL)
    {
        printf("UNABLE TO OPEN FILE ...\n");
        return -1;
    }

    while((entry = readdir(dp))!=NULL)
    {
        sprintf(Name,"%s/%s ",DirName,entry->d_name);
        printf("%s\n",Name);
    }

    closedir(dp);

    return 0;
}