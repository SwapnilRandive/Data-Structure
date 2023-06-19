// Accept N numbers from user and accept one another number as No, check whether No is present or not.

#include<stdio.h>
#include<stdlib.h>
typedef int bool;

#define TRUE 1
#define FALSE 0

bool Check(int Arr[], int iNo, int iLength)
{
    int iCount = 0;
    bool bResult = FALSE;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount] == iNo)
        {
            bResult = TRUE;
            break;
        }
    }

    return bResult;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    bool bRet = FALSE;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the number\n");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d number\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iValue,iSize);

    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    
    free(p);

    return 0;
}