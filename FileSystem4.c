#include<stdio.h>

int main(int argc , char *argv[])
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iAns = 0;

    printf("ENTER THE FIRST NUMBER :\n");
    scanf("%d",&iNo1);

    printf("ENTER THE SECOUND NUMBER :\n");
    scanf("%d",&iNo2);

    iAns = iNo1+iNo2;

    printf("ADDITION IS: %d\n",iAns);

    return 0;
}