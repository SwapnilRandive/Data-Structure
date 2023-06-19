// Write a program which display largest digit of all elements from singly linear linkedlist.
// Input linked list : |11|->|250|->|532|->|419|
// Output : 1    5    5    9

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

void DisplaySmall(PNODE Head)
{
    int iNo = 0;
    int iNo1 = 0;

    printf("The largest digit of all elements is :-\n");

    while(Head != NULL)
    {
        iNo1 = 0;
        
        while((Head -> Data) != 0)
        {
           iNo = (Head -> Data) % 10;
           if(iNo > iNo1)
           {
               iNo1 =  iNo;
           }
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

    InsertFirst(&First, 419);
    InsertFirst(&First, 532);
    InsertFirst(&First, 250);
    InsertFirst(&First, 11);

    Display(First);

    DisplaySmall(First);

    return 0;
}