#include<stdio.h>

void Display(char *str)
{
    printf("%c",*str);
    str++;

    printf("%c",*str);
    str++;

    printf("%c",*str);
    str++;
}

int main()
{
char Arr[50];

printf("enter String :\n");
scanf("%[^\n]s",Arr);

Display(Arr);

 return 0;
}