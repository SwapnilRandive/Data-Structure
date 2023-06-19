// Write a program which search last occurrence of particular element from singly linear linked list.
// Function should return positive at which element is found.
// Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
// Input element : 30
// Output : 6

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

int SearchLastOcc(PNODE Head, int iNo)
{
    int iPos = 0;
    int iPosition = 0;

    while(Head != NULL)
    {
        if((Head->Data) == iNo)
        {
            iPos++;
            iPosition = iPos;
        }
        else
        {
            iPos++;
        }
        Head = Head->Next;
    }

    return iPosition;
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

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    Display(First);

    iRet = SearchLastOcc(First, 30);
    
    printf("The last occurance of the element at the %d position.",iRet);
    
    return 0;
}