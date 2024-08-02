#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    if((ch>='a')&&(ch<='z'))
    {

      printf("it is small letter\n");

    }
    else{
        printf("it is not small letter\n");
    }

}

int main()
{

    char cValue;
    bool bRet=false;
    
    printf("enter one chractr :\n");
    scanf("%c",&cValue);

    CheckSmall(cValue);


  return 0;

    
}