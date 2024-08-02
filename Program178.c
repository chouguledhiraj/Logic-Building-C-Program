//find small w in string
#include<stdio.h>
#include<stdbool.h>

bool CheckOccurance(char *str, char ch)// case sensitive
{
    bool bFlag=false;

    while (*str != '\0')
    {

        if (*str == ch)
        {
            bFlag=true;
            break;
        }
        str++;      
    }
    return bFlag;
}
int main()
{
    char Arr[100];
    char cValue;
    bool bRet=0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    printf("enter the character that you want to search :\n");
    scanf("%c",&cValue);

    bRet=CheckOccurance(Arr, cValue);
    if(bRet==true)
    {
        printf("character is present\n");
    }
    else{
        printf("character  is not present\n");
    }

    
    return 0;
}