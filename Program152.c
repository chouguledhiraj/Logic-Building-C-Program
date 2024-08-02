#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if((ch>='A')&&(ch<='Z'))
    {

        return true;

    }
    else{
        return false;
    }

}

int main()
{

    char cValue;
    bool bRet=false;
    
    printf("enter one chractr :\n");
    scanf("%c",&cValue);

    bRet=CheckCapital(cValue);
    if(bRet==true)
    {
        printf("it is capital letter\n");

    }
    else{
        printf("it is not capital letter\n");
    }

  return 0;

    
}