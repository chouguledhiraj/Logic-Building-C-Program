//find umber of capital letter
#include<stdio.h>

int strlenCapital(char *str)
{
    int iCnt=0;
    while (*str != '\0')
    {
        if (*str >= 65 && *str <= 90)
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

    iRet=strlenCapital(Arr);

    printf("Number of capital letter :%d\n",iRet);
    
    return 0;
}