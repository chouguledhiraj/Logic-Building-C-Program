#include<stdio.h>


int main()
{
    unsigned int iNo1=0, iNo2=0, iret=0;

    printf("enter first number :\n");
    scanf("%d",&iNo1);

    printf("enter second number :\n");
    scanf("%d",&iNo2);

    iret=iNo1 & iNo2;

 

    printf("result of bitwise & :%u\n",iret);

    

    return 0;
}

/*

op1     op2     result
1       1           1
1       0           0
0       0           0
0       1           0


    iNo1    11          0   0   0   0   1   0   1   1
    iNo2    15          0   0   0   0   1   1   1   1
    --------------------------------------------------&
                        0   0   0   0   1   0   1   1


    iNo1    11          0   1   0   0   0   0   1   1
    iNo2    15          0   0   1    0   0   0  1    0
    --------------------------------------------------&
                        0   0   0   0    0  0   1   0   
*/

