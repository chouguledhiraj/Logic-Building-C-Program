#include<stdio.h>


int main()
{
    unsigned int iNo=0;
    unsigned int iMask=0x00000120;
    unsigned int iResult=0;

    printf("enter  number :\n");
    scanf("%d",&iNo);

    iResult=iNo & iMask;

    if(iResult==iMask)
    {
        printf("6 and 9th bit is ON\n");
    }
    else
    {
        printf("6 and 9th bit is off \n");
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

//0000  0000    0000    0000    0000    0001    0010    0000
//0x00000120