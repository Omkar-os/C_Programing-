/////////////////////////////////////////////////////////////
// 2. Count digits of each node
/////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////
// Structure definition
////////////////////////////////////////////////////////////
#pragma pack(1)
struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

/*   OR 
typedef struct node
{
    int data;
    struct node *next;
} NODE, *PNODE, **PPNODE;
*/


/////////////////////////////////////////////////////////////
// Insert node at Last
/////////////////////////////////////////////////////////////

void InsertLast(PPNODE first, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *first;

    newn -> data = no;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
       while(temp->next != NULL)  
       {
        temp = temp -> next;
       }
       temp->next = newn;
    }
}

/////////////////////////////////////////////////////////////
//  (using recursion)
/////////////////////////////////////////////////////////////
void DisplayReverse(PNODE first)
{
    if(first == NULL)
    {
        return;
    }
    DisplayReverse(first->next);
    printf("%d ",first->data);
}

/////////////////////////////////////////////////////////////
//  Count digits of each node
/////////////////////////////////////////////////////////////
void CountDigits(PNODE first)
{
    int NO = 0 , iCount = 0;

    while(first != NULL)
    {
        NO = first->data;
        iCount = 0;

        if(NO==0)
        {
            iCount = 1;
        }
        else
        {
          while(NO != 0)  
          {
            iCount++;
            NO = NO / 10;
          }
        }
        printf("Digits in %d : %d\n", first->data,iCount);
        first = first->next;
    }
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

    CountDigits(first);
    printf("\n");

    return 0;
}