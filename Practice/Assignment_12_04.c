// Accept N numbers from user and display all such numbers which contains 3 digits in it.

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCount = 0, iCounter = 0, iValue1 = 0, iValue2 = 0, iValue3 = 0;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        iValue2 = 0;
        iValue3 = Arr[iCount];

        while(iValue3 > 0)
        {
            iValue1 = iValue3 % 10;
            iValue2++;
            iValue3 = iValue3 / 10;
        }

        if(iValue2 == 3)
        {
            printf("%d\t",Arr[iCount]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d elementns\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Digits(p, iSize);

    free(p);

    return 0;
}