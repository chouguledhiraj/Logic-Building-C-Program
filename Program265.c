//accept string and convert into lower case

#include<stdio.h>

void strlwrX(char *str)
{
    while (*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            (*str)=(*str)+32;
        }
        str++;
    }
    


}
int main()
{
    char Arr[30];

    printf("Enter string :\n");
    scanf("%[^'\n]s",Arr);

    strlwrX(Arr);

    printf("updated string is :%s",Arr);

    return 0;
}

