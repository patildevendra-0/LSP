#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>  

#pragma pack(1)
struct Student
{
    int RollNo;
    char Sname[20];
    float Marks;
    int Age;   
};
       
int main(int argc ,char argv[]) 
{

    struct Student sobj;
    char Fname[20];
    int fd = 0;

    printf("ENTER THE FILE NAME..\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("UNABLE TO OPEN FILE...\n");
        return -1;
    }

    read(fd,&sobj,sizeof(sobj));

    printf("Student Name : %s\n",sobj.Sname);
    printf("Student Age  :%d\n",sobj.Age);
    printf("Student Marks:%f\n",sobj.Marks);
    printf("Student RollNo:%d\n",sobj.RollNo); 

    close(fd);  
    return 0;
}