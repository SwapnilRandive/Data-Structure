// Accept N numbers from user and accept Range, Display all elements from the range.

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iNo1, int iNo2, int iLength)
{
    int iCount = 0;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if((Arr[iCount] >= iNo1) && (Arr[iCount] <= iNo2))
        {
            printf("%d\t",Arr[iCount]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf("Enter starting point \n");
    scanf("%d",&iValue1);

    printf("Enter ending point \n");
    scanf("%d",&iValue2);

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

    Range(p, iValue1, iValue2, iSize);

    free(p);

    return 0;
}