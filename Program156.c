#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char ch)
{
    if((ch>='0')&&(ch<='9'))
    {

      printf("it is digit\n");

    }
    else{
        printf("it is not digit\n");
    }

}

int main()
{

    char cValue;
    bool bRet=false;
    
    printf("enter one chractr :\n");
    scanf("%c",&cValue);

    CheckDigit(cValue);


  return 0;

    
}