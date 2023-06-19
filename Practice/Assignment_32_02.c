// Write a program which display all palindrome elements from singly linear linkedlist.
// Input linked list : |11|->|28|->|17|->|414|->|6|->|89|
// Output : 11    414     6

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

void DisplayPallindrome(PNODE Head)
{
    int iNo = 0;
    int iRev = 0;
    int iValue = 0;

    printf("The Palindrome elements are :-\n");

    while(Head != NULL)
    {
        iRev = 0;
        iValue = Head -> Data;

        while((Head -> Data) != 0)
        {
            iNo = (Head -> Data) % 10;
            iRev = (iRev * 10) + iNo;
            (Head -> Data) = (Head -> Data) / 10;
        }
        
        if(iRev == iValue)
        {
            printf("%d\t",iValue);
        }

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
    InsertFirst(&First, 414);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    Display(First);
    
    DisplayPallindrome(First);

    return 0;
}