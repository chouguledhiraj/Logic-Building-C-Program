//find umber of capital letter using ascii value
#include<stdio.h>

int strlenSmallX(char *str)
{
    int iCnt=0;
    while (*str != '\0')
    {
        if (*str >= '97' && *str <= '122')
        {
            iCnt++;
            
        }
        str++;      
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    iRet=strlenSmallX(Arr);

    printf("Number of capital letter :%d\n",iRet);
    
    return 0;
}