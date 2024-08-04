#include<stdio.h>


int main()
{
    unsigned int iNo=0;
    unsigned int iMask=0xfffffff7;
    unsigned int iResult=0;

    printf("enter  number :\n");
    scanf("%d",&iNo);

    iResult=iNo & iMask;

   
        printf("updated number is :%u\n",iResult);
  
    

    return 0;
}

/*

op1     op2         &      |      ^
1       1           1      1      0
1       0           0      1      1
0       0           0      1      1
0       0           0      0      0

*/

