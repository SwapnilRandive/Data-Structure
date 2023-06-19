// Write a program which reverse each element of singly linear linkedlist.
// Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
// Output : |11|->|82|->|71|->|14|->|6|->|98|

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

void Reverse(PNODE Head)
{
    int iNo = 0;
    int iRev = 0;

    while(Head != NULL)
    {
        iRev = 0;

        while((Head -> Data) != 0)
        {
            iNo = (Head -> Data) % 10;
            iRev = (iRev * 10) + iNo;
            (Head -> Data) = (Head -> Data) / 10;
        }

        printf("%d\t", iRev);

        Head = Head -> Next;
    }

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

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    Display(First);

    Reverse(First);

    return 0;
}