/*Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 5           iCol = 5
Output : a b c d e
         1 2 3 4 5
         a b c d e
         1 2 3 4 5
         a b c d e
         
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0;
    char ch = '\0';

    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        for(iCnt2 = 1, ch = 'a'; iCnt2 <= iCol; iCnt2++, ch++)
        {
            if((iCnt1 % 2) == 0)
            {
                printf("%d\t",iCnt2);
            }
            else
            {
                printf("%c\t",ch);
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