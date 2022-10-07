#include<stdio.h>
char* raina(char []);
int main()
{
    char s[20];
    printf("enter the string: ");
    gets(s);
    char *p=raina(s);
    printf("%s",p);


}

char* raina(char o[])
{
    int n;
    printf("enter the index: ");
    scanf("%d",&n);
    return o+n;
}

