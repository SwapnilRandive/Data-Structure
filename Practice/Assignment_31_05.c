// Write a program which display addition of digits of elements from singly linear linkedlist.
// Input linked list : |110|->|230|->|20|->|240|->|640|
// Output : 2     5    2    6     10

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

void SumDigit(PNODE Head)
{
    int iNo = 0;
    int iNo1 = 0;

    printf("The sum of all digits of element is :-\n");

    while(Head != NULL)
    {
        iNo1 = 0;

        while((Head -> Data) != 0)
        {
            iNo = (Head -> Data) % 10;
            iNo1 = iNo1 + iNo;
            (Head -> Data) = (Head -> Data) / 10;
        }
        printf("%d\t",iNo1);

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

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    Display(First);

    SumDigit(First);

    return 0;
}