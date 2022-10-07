#include<stdio.h>
int main()
{
    char a[30];
    int i;
    gets(a);
    while(a[i]!=0)
    {
        i++;
    }
    printf("%d",i);
}
