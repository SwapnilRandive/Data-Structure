// Write a program which search first occurrence of particular element from singly linear linked list.
// Function should return position at which element is found.
// Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
// Input element : 30
// Output : 3

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

int SearchFirstOcc(PNODE Head, int iNo, int iNo1)
{
    int iPos = 0;

    while(Head != NULL)
    {
        if((Head->Data) == iNo)
        {
            iPos++;
            break;
        }
        else
        {
            iPos++;
            Head = Head->Next;
        }
    }

    if(iPos == iNo1)
    {
        return -1;
    }
    else
    {
        return iPos;
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

int  Count(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head -> Next;
    }

    return iCnt;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int iValue = 0;
    int iReturn = 0;

    printf("Enter the element that you want to find in above LinkedList :- \n");
    scanf("%d",&iValue);

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    Display(First);
    iReturn = Count(First);

    iRet = SearchFirstOcc(First, iValue, iReturn);
    if(iRet == -1)
    {
        printf("Invalid Input\n");
    }
    else
    {
        printf("The first occurance of the element at the %d position.",iRet);
    }

    return 0;
}