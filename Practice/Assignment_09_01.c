// Accept N numbers from user and return difference between summation of even elements and summation of odd elements.

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCount = 0;
    int ioSum = 0;
    int ieSum = 0;

   for(iCount = 0; iCount < iLength; iCount++)
   {
       if((Arr[iCount] % 2) == 0)
       {
           ieSum = ieSum + Arr[iCount];
       }
       else 
       {
           ioSum = ioSum + Arr[iCount];
       }
   }

   return ieSum - ioSum;
}

int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element :\n",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}