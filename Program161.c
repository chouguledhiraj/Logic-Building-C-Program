#include<stdio.h>

int main()
{
char Arr[50];

printf("enter your full name :\n");
scanf("%[^\n]s",Arr);

printf("hello :%s\n",Arr);
    return 0;
}