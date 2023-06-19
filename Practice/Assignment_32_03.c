// Write a program which display product of digits of elements from singly linear linkedlist.(Don't consider 0)
// Input linked list : |11|->|20|->|32|->|41|
// Output : 1     2     6     4

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

void DisplayProduct(PNODE Head)
{
    int iNo = 0;
    int iNo1 = 1;

    printf("The product of all digits of each element is :-\n");

    while(Head != NULL)
    {
        iNo1 = 1;

        if((Head -> Data) == 0)
        {
            iNo1 = 0;
        }
        else
        {
            while((Head -> Data) != 0)
            {
            iNo = (Head -> Data) % 10;
            if(iNo != 0)
            {
                iNo1 = iNo1 * iNo;
            }
            (Head -> Data) = (Head -> Data) / 10;
            }
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

    InsertFirst(&First, 40);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    Display(First);

    DisplayProduct(First);

    return 0;
}