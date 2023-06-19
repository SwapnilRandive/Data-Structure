/*Write a program which accept string from user and convert it into upper case.

Input : Marvellous Multi OS
Output : MARVELLOUS MULTI OS

*/

#include<stdio.h>

void StruprX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    StruprX(Arr);

    printf("Modified string is :%s",Arr);

    return 0;
}