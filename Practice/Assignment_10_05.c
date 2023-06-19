// Accept N numbers from user and accept one another number as NO, return frequency of No from it.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iValue, int iLength)
{
    int iCount = 0;
    int iResult = 0;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount] == iValue)
        {
            iResult++;
        }
    }

    return iResult;
}

int main()
{
    int iSize = 0, iNo = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the number\n");
    scanf("%d",&iNo);

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

    iRet = Frequency(p, iNo, iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}