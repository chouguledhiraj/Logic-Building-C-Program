//accept string and convert capital to small and small to capital letter
// program chuktoy logic 268 mde correct kely


#include<stdio.h>

void strtoggleX(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;  // Convert lowercase to uppercase
        }
        else 
        {
            *str = *str + 32;  // Convert uppercase to lowercase
        }
        str++;
    }
    


}
int main()
{
    char Arr[30];

    printf("Enter string :\n");
    scanf("%[^'\n]s",Arr);

    strtoggleX(Arr);

    printf("updated string is :%s",Arr);

    return 0;
}

