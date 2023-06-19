// Accept N numbers from user and return product of all odd elements.

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCount = 0;
    int iProd = 1;
    int iCounter = 0;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if((Arr[iCount] % 2) != 0)
        {
            iProd = iProd * Arr[iCount]; 
        }

        if((Arr[iCount] == 0) || (Arr[iCount] % 2) == 0)
        {
            iCounter++;
        }
    }
    
    if(iCounter == iLength)
    {
        iProd = 0;
    }

    return iProd;
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
        printf("Enter %d number",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Product(p, iSize);

    printf("Product is %d\n",iRet);

    free(p);

    return 0;
}