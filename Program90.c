//Input : 5
//Output :A B C D E 


#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    char ch='\0';
   //   1         2          3
    for(iCnt= 1, ch='a' ; iCnt <= iNo ; iCnt++, ch++)
    {
        printf("%c\t",ch);    //5
       
               
    }
    
    printf("\n");  
}

int main()
{
    int iValue=0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    Display(iValue);        //Display(5)

    return 0;

}