// Write a program which displays all elements which are prime from singly linear linkedlist.
// Input linked list : |11|->|20|->|17|->|41|->|22|->|89|
// Output : 11     17     41     89


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

void DisplayPrime(PNODE Head)
{
    int iCnt = 0;
    int iSum = 0;
    int iNo = 0;

    printf("The perfect numbers are :- \n");

    while(Head != NULL)
    {
        iNo = Head -> Data;
        iSum = 0;

        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == 1)
        {
            printf("%d\t",iNo);
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
    InsertFirst(&First, 22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    Display(First);

    DisplayPrime(First);
    
    return 0;
}