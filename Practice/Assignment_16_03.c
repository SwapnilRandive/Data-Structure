/*Accept number of rows and number of columsn from user and display below pattern.

Input : iRow = 3             iCol = 5
Output : A A A A A
         B B B B B
         C C C C C

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0;
    char ch = '\0';

    for(iCnt1 = 1, ch = 'A'; iCnt1 <= iRow; iCnt1++, ch++)
    {
        for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        {
            printf("%c\t",ch);
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