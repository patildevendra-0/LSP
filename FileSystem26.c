#include<stdio.h>
#include<dirent.h>
#include<sys/stat.h>
#include<string.h>

int main(int argc ,char *argv[])
{
    char File_Name[30] = {'/0'};
    DIR *dp = NULL;
    struct dirent *entry = NULL;
    struct stat sobj;
    int iMax = 0;
    char Copy_name[30]={'\0'};

    if(argc != 2)
    {
        printf("INSUFFICENT ARGUMNET..\n");
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
        sprintf(File_Name,"%s/%s",argv[1],entry->d_name);
        stat(File_Name,&sobj);
        if(S_ISREG(sobj.st_mode))
        {
            if(iMax < sobj.st_size)
            {
                iMax = sobj.st_size;
                strcpy(Copy_name,File_Name);
            }
        }
        
    }

    printf("NAME OF LARGEST FILE : %s\t WITH SIZE %d\n",Copy_name,iMax);

    return 0;
}