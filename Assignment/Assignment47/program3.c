/////////////////////////////////////////////////////////////
// 3. Sum of digits of each node
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
//  Sum of digits of each node
/////////////////////////////////////////////////////////////
void SumDigits(PNODE first)
{
    int No = 0 , Sum = 0;

    while(first != NULL)
    {
      No = first->data;
      Sum = 0;

      while(No != 0)
    {
        Sum = Sum +(No % 10);
        No = No / 10;
    }
    printf("Sum of digits of %d : %d\n",first->data,Sum);
    first = first -> next;
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
    
    SumDigits(first);
    printf("\n");
    
    return 0;
}