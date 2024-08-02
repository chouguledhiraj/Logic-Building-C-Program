//find small w in string
#include<stdio.h>
#include<stdbool.h>

bool CheckOccurance(char *str)// case sensitive
{
    int iCnt=0;
    while (*str != '\0')
    {

        if (*str == 'w')
        {
            true;
        }
        iCnt;      
    }
    return false;
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
        printf("w is present\n");
    }
    else{
        printf("w is not present\n");
    }

    
    return 0;
}