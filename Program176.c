//find small w in string
#include<stdio.h>
#include<stdbool.h>

bool CheckOccurance(char *str)// case sensitive
{
    bool bFlag=false;

    while (*str != '\0')
    {

        if (*str == 'w' || 'W')
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
    bool bRet=0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    bRet=CheckOccurance(Arr);
    if(bRet==true)
    {
        printf("l is present\n");
    }
    else{
        printf("l is not present\n");
    }

    
    return 0;
}