// Accept N numbers from user and check whether that numbers contains 11 in it or not.

#include<stdio.h>
#include<stdlib.h>
typedef int bool;

#define TRUE 1
#define FALSE 0

bool Check(int Arr[], int iLength)
{
    int iCount = 0;
    bool bResult = FALSE;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount] == 11)
        {
            bResult = TRUE;
            break;
        }
    }

    return bResult;
}

int main()
{
    int iSize = 0, iCnt = 0;
    bool bRet = FALSE;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p, iSize);

    if(bRet == TRUE)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent\n");
    }

    free(p);

    return 0;
}