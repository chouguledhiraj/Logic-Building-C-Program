//find small w in string
#include<stdio.h>
#include<stdbool.h>

int CheckOccurance(char *str, char ch)
{
    int iCnt=1;
    bool bFalg=false;

    while (*str != '\0')
    {

        if (*str == ch)
        {
            bFalg=true;
            break;
        }
        iCnt++;
        str++;      
    }
    if(bFalg==true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
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

    iRet=CheckOccurance(Arr, cValue);
    if(iRet ==-1)
    {
        printf("there is no such a letter\n");
    }
    else{
        printf("letters occurs at the position %d\n",iRet);
        
    }

    
    return 0;
}