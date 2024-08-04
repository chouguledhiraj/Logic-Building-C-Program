#include<stdio.h>


int main()
{
    unsigned int iNo=0;
    unsigned int iMask=136;
    unsigned int iResult=0;

    printf("enter  number :\n");
    scanf("%d",&iNo);

    iResult=iNo & iMask;

    if(iResult==iMask)
    {
        printf("4 and 8th bit is ON\n");
    }
    else
    {
        printf("4 and 8th bit is off \n");
    }
    

    return 0;
}

/*

op1     op2         &      |      ^
1       1           1      1      0
1       0           0      1      1
0       0           0      1      1
0       0           0      0      0

*/

