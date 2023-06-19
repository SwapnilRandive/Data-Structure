// Write a program which accept name from user and print that name

#include<stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name \n");
    scanf("%s",&Name);

    //gets(Name);
    //scanf("%[^\n]s",Name);
    //scanf("%[^\n]%*c",Name);
    //fgets(Name, 30, stdin);

    printf("Your name is %s",Name);

    return 0;
}

// In this question there are some doubghts  are there