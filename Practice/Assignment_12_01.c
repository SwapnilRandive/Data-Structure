// Accept N numbers from user and return the largest number.

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iCount = 0;
    int iResult = Arr[0];

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount] > iResult)
        {
            iResult = Arr[iCount];
        }
    }

    return iResult;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
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

    iRet = Maximum(p, iSize);

    printf("Largest number is %d",iRet);

    free(p);

    return 0;
}