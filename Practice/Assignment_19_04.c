/*Accept number of rows and number of columns from usern and display below patten.

Input : iRow = 6               iCol = 6
Output : * * * * * *
         * *       *
         *   *     *
         *     *   *
         *       * *
         * * * * * *
         
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0;

    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        {
            if((iCnt1 == iCnt2) || (iCnt1 == 1) || (iCnt1 == iRow) || (iCnt2 == 1) || (iCnt2 == iRow))
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns \n");
    scanf("%d%d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}