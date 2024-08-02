//find small w in string
#include<stdio.h>


int CountFequency(char *str, char ch)
{
    int iCnt=0;

    while (*str != '\0')
    {

        if (*str == ch)
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
    char cValue;
    int iRet=0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    printf("enter the character that you want to search :\n");
    scanf(" %c",&cValue); 

    iRet=CountFequency(Arr, cValue);
    if(iRet ==-1)

    printf("Frequency is %d\n",iRet);

    
    return 0;
}