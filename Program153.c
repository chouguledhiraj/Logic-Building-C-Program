#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if((ch>='A')&&(ch<='Z'))
    {

      printf("it is capital letter\n");

    }
    else{
        printf("it is not capital letter\n");
    }

}

int main()
{

    char cValue;
    bool bRet=false;
    
    printf("enter one chractr :\n");
    scanf("%c",&cValue);

    CheckCapital(cValue);


  return 0;

    
}