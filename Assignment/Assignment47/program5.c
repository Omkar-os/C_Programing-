/////////////////////////////////////////////////////////////
// 5. Count prime numbers
/////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)
struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

/////////////////////////////////////////////////////////////
// Helper function to check prime
/////////////////////////////////////////////////////////////
bool IsPrime(int No)
{
    int iCnt;

    if(No < 2)
        return false;

    for(iCnt = 2; iCnt <= No / 2; iCnt++)
    {
        if(No % iCnt == 0)
            return false;
    }
    return true;
}

/////////////////////////////////////////////////////////////
// Insert node at Last
/////////////////////////////////////////////////////////////
void InsertLast(PPNODE first, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *first;

    if(newn == NULL)
    {
        return;
    }

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

/////////////////////////////////////////////////////////////
// Count prime numbers
/////////////////////////////////////////////////////////////
int CountPrime(PNODE first)
{
    int Count = 0;

    while(first != NULL)
    {
        if(IsPrime(first->data))
        {
            Count++;
        }
        first = first->next;
    }
    return Count;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertLast(&first, 11);
    InsertLast(&first, 21);
    InsertLast(&first, 51);
    InsertLast(&first, 101);
    InsertLast(&first, 108);

    iRet = CountPrime(first);
    printf("Count of prime numbers: %d\n", iRet);

    return 0;
}
