#include<stdio.h>



int strlenX(char *str)
{
    int iCount=0;

    while(*str !='\0');
    {
        printf("%c\n",*str);
        str++;
    }
    return iCount;
}

int main()
{
char Arr[50];
int iRet=0;

printf("enter String :\n");
scanf("%[^\n]s",Arr);

iRet=strlenX(Arr);

printf("String lengt is : %d\n");


 return 0;
}