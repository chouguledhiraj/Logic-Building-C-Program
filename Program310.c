//count one in binary digit
#include<stdio.h>

int CountOne(int iNo)
{
    int iDigit=0;
    int iSum=0;

    printf("binary conversion is :\n");

  
    while(iNo != 0)
    {
        iDigit = iNo % 2;
        iSum=iSum+iDigit;     
        iNo = iNo / 2;
    }
    printf("\n");
}

int main()
{
    int iValue=0, iRet=0;

    printf("enter number :\n");
    scanf("%d",&iValue);

    iRet=CountOne(iValue);

    printf("Number of one is :%d\n",iRet);

    

    return 0;
}

