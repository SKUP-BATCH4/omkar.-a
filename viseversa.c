#include<stdio.h>
#include<ctype.h>
void main()
{
    char s[20];
    int ctr,ch,i;
    printf("Enter the string:");
    gets(s);
    i=strlen(s);
    ctr=i;
    for(i=0;i<ctr;i++)
    {
        ch=islower(s[i])?toupper(s[i]):tolower(s[i]);
        putchar(ch);
    }
    printf("\n");

}

