#include<stdio.h>
#include<fcntl.h>

int main(int argc ,char *argv[])
{

    int fd = 0;
    char Fname[20];

    printf("ENTER THE FILE THAT YOU WANT TO OPEN :\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("UNBALE TO OPEN FILE ...\n");
        return -1;
    }
    else
    {
        printf("FILE IS SUCCESSFULLY OPEN WITH FD :%d\n",fd);
    }

    return 0;
}