#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()
{
    char str1[100], str2[100];
    int result;
    printf("\n Enter a string 1: ");
    gets(str1);

    printf("\n Enter a string 2: ");
    gets(str2);

    result = strcmp(str1,str2);

    if(result == 0)
    {
        printf("\n Both Strings are equal.");
    }else if(result > 0)
    {
        printf("\n String 1 is Greater.");
    }else{
        printf("\n String 2 is greater");
    }
}
