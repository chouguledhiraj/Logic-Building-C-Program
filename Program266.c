//accept string and convert into upper case

#include<stdio.h>

void struprX(char *str)
{
    while (*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            (*str)=(*str)-32;
        }
        str++;
    }
    


}
int main()
{
    char Arr[30];

    printf("Enter string :\n");
    scanf("%[^'\n]s",Arr);

    struprX(Arr);

    printf("updated string is :%s",Arr);

    return 0;
}

