#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}   

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First -> next;
    }
    printf("NULL\n");
} 

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
} 

int Addition(PNODE First)
{
    int iSum=0;
    while(First !=NULL)
    {
        iSum=iSum+(First->data);
        First=First->next;
    }

    return iSum;
}

int EvenCount(PNODE First)
{
    int iCount=0;
    while(First !=NULL)
    {
        if((First->data)&2==0)
        {
            iCount++;
        }
        First=First->next;
    }

    return iCount;
}

int OddCount(PNODE First)
{
    int iCount=0;
    while(First !=NULL)
    {
        if((First->data)% 2==1)
        {
            iCount++;
        }
        First=First->next;
    }

    return iCount;
}

int Frequency(PNODE First, int No)
{
    int iCount=0;

    while(First !=NULL)
    {
        if(First->data==No)
        {
            iCount;
        }
        First=First->next;
    }

    return iCount;
}

bool Sreach(PNODE First,int No)
{
    bool bFalg=false;

    while(First !=NULL)
    {
        if(First->data=No)
        {
            bFalg=true;
            break;
        }
        First=First->next;
    }
    return bFalg;
}

int SearchFirstOccu(PNODE First , int No)
{

    int iCount=1;
    int iPos=-1;

    while(First !=NULL)
    {
        if(First->data==No)
        {
            iPos=iCount;
            break;
        }
        iCount++;
        First=First->next;
    }

    return iPos;
}

int SearchLastOccu(PNODE First , int No)
{
    int iPos = -1;
    int iCount = 1;

    while (First != NULL)
    {
        if (First->data == No)
        {
            iPos = iCount;
        }
        iCount++;
        First = First->next;
    }

    return iPos;  
}

int SumDigits(PNODE First , int No)
{
   int iSum = 0;
   int iNo;
   int iDigit=0;

    while (First != NULL)
    {
        iNo = First->data;
        while (iNo != 0)
        {
            iSum = iNo % 10;
            iSum=iSum+iDigit;
            iNo=iNo/10;
        }
        printf("%d\n",iSum);
        iSum=0;
        First = First->next;
    }
    return iSum;
}

int FactorAddition(int No)
{
    int No=0;
    int iSum=0;
   
            for (int i = 1; i <= No/2; i++)
            {
                if (No % i == 0)
                {
                    iSum =iSum+ i;
                }
            }
        return iSum;
}
void SumFactor(PNODE First)
{
    int No=0;
    int iSum=0;
    while (First != NULL)
        {
            No = First->data;
            iSum = 0;

            for (int i = 1; i <= No/2; i++)
            {
                if (No % i == 0)
                {
                    iSum =iSum+ i;
                }
            }
            printf("Sum of factors of %d: %d\n", No, iSum);
            First = First->next;
        }
}

bool CheckPerfect(int No)
{
    int No=0;
    int iSum=0;
   
            for (int i = 1; i <= No/2; i++)
            {
                if (No % i == 0)
                {
                    iSum =iSum+ i;
                }
            }
        return iSum;

        if(iSum==No)
        {
            return true;
        }
        else
        {
            return false;
        }
}

void DisplayPerfect(PNODE First)
{
    
    while (First != NULL)
        {
            if(CheckPerfect(First->data)==true)
            {
                printf("Perfect no from LL is :%d\n",First->data);
            }
            First = First->next;
        }
}



int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    bool bRet=false;
    
    InsertFirst(&Head,42);
    InsertFirst(&Head,10);
    InsertFirst(&Head,50);
    InsertFirst(&Head,21);
    InsertFirst(&Head,10);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);
    
    Display(Head);

    iRet=Addition(Head);

    printf("Addition of all ele :%d\n",iRet);

    iRet=EvenCount(Head);
    printf("Even num is :%d\n",iRet);

    iRet=OddCount(Head);
    printf("Odd num is :%d\n",iRet);

    iRet=Frequency(Head,21);
    printf("frequency is :%d\n",iRet);

    bRet=Search(Head,50);
    if(bRet==true)
    {
        printf("Ele is present in LL\n");
    }
    else
    {
        printf("there is no such ele in LL \n");
    }
    
    iRet=SearchFirstOccu(Head,21);
    if(iRet==-1)
    {
        printf("There is no such ele :\n");
    }
    else
    {
        printf("First occu ele is :%d\n",iRet);
    }

    iRet=SearchLastOccu(Head,21);
    if(iRet==-1)
    {
        printf("There is no such ele :\n");
    }
    else
    {
        printf("Last occu ele is :%d\n",iRet);
    }

    SumFactor(Head);
    return 0;
}
