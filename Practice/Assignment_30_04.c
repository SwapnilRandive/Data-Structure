// Write a program which returns largest element from singly linear linkedlist.
// Input linked list : |100|->|230|->|320|->|240|
// Output : 320


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

int Maximum(PNODE Head)
{
    int iNo = 0;

    while(Head != NULL)
    {
        if((Head -> Data) > iNo)
        {
            iNo = Head -> Data;
        }
        Head = Head -> Next;
    }

    return iNo;
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
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    Display(First);

    iRet = Maximum(First);
    
    printf("The largest element is :- %d.",iRet);
    
    return 0;
}