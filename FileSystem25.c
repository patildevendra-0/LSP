#include<stdio.h>
#include<dirent.h>
#include<sys/stat.h>

int main(int argc ,char *argv[])
{
    char File_Name[30];
    DIR * dp = NULL;
    struct dirent *entry = NULL;
    struct stat sobj;

    if(argc != 2) 
    {
        printf("INSIFFICIENT ARGUMNETS...\n");
        return -1;
    }

    dp = opendir(argv[1]);
    if(dp == NULL)
    {
        printf("UNABLE TO OPEN DIRECTORY...\n");
        return -1;
    }

    while((entry = readdir(dp))!= NULL)
    {
        sprintf(File_Name,"%s/%s",argv[1],entry->d_name);
        stat(File_Name,&sobj);

        if(S_ISREG(sobj.st_mode))
        {
            printf("FILE NAME : %s\t FILE SIZE : %d\n ",File_Name,sobj.st_size);
        }
    }



    return 0;
}