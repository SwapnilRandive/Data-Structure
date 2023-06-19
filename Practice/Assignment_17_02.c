/*Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4           iCol = 5
Output : 2 4 6 8 10
         1 3 5 7 9
         2 4 6 8 10
         1 3 5 7 9
         
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0; 
    int iNo = 0;

    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        for(iCnt2 = 1, iNo = 0; iCnt2 <= iCol; iCnt2++, iNo++)
        {
            if((iCnt1 % 2) == 0)
            {
                iNo = iNo + 1;
                printf("%d\t",iNo);
            }
            else
            {
                printf("%d\t",iCnt2 * 2);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d%d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}