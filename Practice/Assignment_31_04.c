// Write a program which returns second maximum elements from singly linear linkedlist.
// Input linked list : |110|->|230|->|320|->|240|
// Output : 240

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

struct Node
{
    int Data;
    struct Node *Next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));

    newn ->Next = NULL;
    newn ->Data = iNo;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn ->Next = *Head;
        *Head = newn;
    }
}

int SecMaximum(PNODE Head)
{
    int iMax = 0;
    int iMax1 = 0;

    while(Head != NULL)
    {
        if((Head -> Data) > iMax1)
        {
            iMax1 = Head -> Data;
        }

        if((Head -> Data) > iMax)
        {

            iMax1 = iMax;
            iMax = Head -> Data;
        }
        Head = Head -> Next;
    }

    return iMax1;
}

void Display(PNODE Head)
{
    printf("Elements of LinkedList are :- \n");

    while(Head != NULL)
    {
        printf("| %d | -> ", Head->Data);
        Head = Head->Next;
    }
    printf("NULL \n");
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 300);
    InsertFirst(&First, 400);
    InsertFirst(&First, 500);

    Display(First);

    iRet = SecMaximum(First);

    printf("The second maximum elements in LL is %d.",iRet);
    
    return 0;
}