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

int MiddleElement(PNODE First)
{
    int iCnt=0;
    PNODE temp=First;
    int iPos=0, i=0;

    while(temp!=NULL)
    {
        iCnt++;
        temp=temp->next;

    }

    iPos=iCnt/2;

    for(i=1; i<=iPos; i++)
    {
        First=First->next;
    }
    return First ->data;
}

int MiddleElementX(PNODE First)
{
    PNODE Teacher=First;
    PNODE Student=First;

    while((Teacher !=NULL)&&(Teacher->next!=NULL))
    {
        Teacher=Teacher->next->next;
        Student=Student->next;
    }
    return (Student->data);
}

int main()
{
    PNODE Head = NULL;
    PNODE temp1=NULL;
    PNODE temp2=NULL;

    
    InsertFirst(&Head,42);
    InsertFirst(&Head,10);
    InsertFirst(&Head,50);
    InsertFirst(&Head,28);
    InsertFirst(&Head,10);
    InsertFirst(&Head,21);

    temp1=Head;
    temp1=temp1->next->next;

    temp2=Head;
    temp2=temp2->next->next->next->next->next;

    temp2->next=temp1;

    Display(Head);
    


    return 0;
}
