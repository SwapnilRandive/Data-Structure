/*Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 3          iCol = 5
Output : 5 4 3 2 1
         5 4 3 2 1
         5 4 3 2 1

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int ioCnt = 0, iiCnt = 0;

    for(ioCnt = 1; ioCnt <= iRow; ioCnt++)
    {
        for(iiCnt = iCol; iiCnt >= 1; iiCnt--)
        {
            printf("%d\t",iiCnt);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns :\n");
    scanf("%d%d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}