/*Accept number of rows and number of columsn from user and dispaly below pattern.

Input : iRow = 4            iCol = 4
Output : 1 2 3 4
         5 6 7 8
         9 1 2 3
         4 5 6 7
         
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0;
    int iNo = 0;

    for(iCnt1 = 1, iNo = 1; iCnt1 <= iRow; iCnt1++)
    {
        for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++, iNo++)
        {
            if(iNo > 9)
            {
                iNo = 1;
            }
            printf("%d\t",iNo);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columsn\n");
    scanf("%d%d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}