// Write a program which returns addition of all even elements from singly linear linkedlist.
// Input linked list : |11|->|20|->|32|->|41|
// Output : 52

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

int AdditionEven(PNODE Head)
{
    int iSum = 0;
    int iNo = 0;

    while(Head != NULL)
    {
        iNo = Head -> Data;

        if((iNo % 2) == 0)
        {
            iSum = iSum + iNo;
        }

        Head = Head -> Next;
    }

    return iSum;
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

    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    Display(First);

    iRet = AdditionEven(First);

    printf("The addition of all even elements in LL is %d.",iRet);
    
    return 0;
}