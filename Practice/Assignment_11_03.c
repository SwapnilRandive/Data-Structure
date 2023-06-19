// Accept N numbers from usre and accept one another number as No, return index of last occurance of that No.

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iNo, int iLength)
{
    int iCount = 0;
    int iResult = -1;

    /*for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount] == iNo)
        {
            iResult = iCount;
        }
    }*/

    for(iCount = iLength - 1; iCount >= 0; iCount--)
    {
        if(Arr[iCount] == iNo)
        {
            iResult = iCount;
            break;
        }
    }

    return iResult;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
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
        printf("Enter %d element\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = LastOcc(p, iValue, iSize);

    if(iRet == -1)
    {
        printf("There is no such a number\n");
    }
    else
    {
        printf("Last occurance of number is %d",iRet);
    }

    free(p);

    return 0;
}