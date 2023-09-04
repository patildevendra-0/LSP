#include<stdio.h>
#include<sys/stat.h>
#include<dirent.h>
#include<string.h>
#include<unistd.h>

#pragma pack(1)
struct FileData
{
    int File_Size;
    char File_Name[20];
};


int main(int argc ,char *argv[])
{
    DIR * dp = NULL;
    struct dirent *entry = NULL;
    struct stat sobj;
    struct FileData fobj;
    int Fd = 0;
    char File_Name[20];    

    if(argc != 2)
    {
        printf("INSIFFICIENT ARGUMENTS...\n");
        return -1;
    }

    dp = opendir(argv[1]);
    if(dp == NULL)
    {
        printf("UNABLE TO OPEN FILE...\n");
        return -1;
    }

    Fd = creat("FILE_DATA.txt",0777);
    if(Fd == -1)
    {
        printf("UNABLE TO CREATE FILE...\n");
        return -1;
    }

    while((entry = readdir(dp))!= NULL)
    {
        sprintf(File_Name,"%s/%s",argv[1],entry->d_name);
        stat(File_Name,&sobj);
        fobj.File_Size = sobj.st_size;
        strcpy(fobj.File_Name,entry->d_name);
        write(Fd,&fobj,sizeof(fobj));
    }    


    closedir(dp);
    close(Fd);

    return 0;
}