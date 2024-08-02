//find number of vowels
#include<stdio.h>

int strlenSmallX(char *str)// case sensitive
{
    int iCnt=0;
    while (*str != '\0')
    {
        if (*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
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