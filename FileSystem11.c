#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc , char *argv[])
{
    int fd = 0;
    char Buffer[20] = {'\0'};
    int iRet = 0;

    if(argc!=2)
    {
        printf("INSUFFICENT ARGUMNET COUNT...\n");
        return -1;
    }

    fd = open(argv[1],O_RDONLY);
    if(fd==-1)
    {
        printf("UNABLE TO OPEN FILE....\n");
        return -1;
    }

    iRet = read(fd,Buffer,10);
    if(iRet == 0)
    {
        printf("UNABLE TO READ DATA FROM FILE...\n");
        return -1;
    }

    printf("DATA FROM THE FILE :%s\n",Buffer);


    return  0;
}