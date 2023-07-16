#include<stdio.h>
#include<fcntl.h>
#include<dirent.h>

int main(int argc ,char *argv[])
{

    DIR *dp  = NULL;
    struct dirent *entry = NULL;

    if(argc !=2)
    {
        printf("INSUFFICINET ARGUMENTS....\n");
        return -1;
    }

    dp = opendir(argv[1]);
    if(dp==NULL)
    {
        printf("UNABLE TO OPEN DIRECTORY....\n");
        return -1;
    }

    while((entry = readdir(dp))!=NULL)
    {
        printf("------------------------------------------------------------");
        printf("%20s : %d\n",entry->d_name ,entry->d_ino);  
    }



    return 0;
}