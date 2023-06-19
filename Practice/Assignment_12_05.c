// Accept N numbers from user and display summation of digits of each number.

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int iCount = 0, iDigit = 0, iValue = 0;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        iValue = 0;
        
        while(Arr[iCount] > 0)
        {
            iDigit = Arr[iCount] % 10;
            iValue = iValue + iDigit;
            Arr[iCount] = Arr[iCount] / 10;
        }

        printf("%d\t",iValue);
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

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    DigitsSum(p, iSize);

    free(p);

    return 0;
}