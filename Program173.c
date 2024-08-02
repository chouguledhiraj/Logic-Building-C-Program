//find number of spaces
#include<stdio.h>

int CountSpace(char *str)// case sensitive
{
    int iCnt=0;
    while (*str != '\0')
    {
        if (*str == ' ')
        {
            iCnt++;
        }
        str++;      
    }
    return iCnt;
}
int main()
{
    char Arr[100];
    int iRet=0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    iRet=CountSpace(Arr);

    printf("Number of capital letter :%d\n",iRet);
    
    return 0;
}