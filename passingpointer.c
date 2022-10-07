#include<stdio.h>
void print(char[]);
int main()
{
    char a[100];
    gets(a);
    char (*p)(char [])=print;
    (*p)(a);

}
void print(char a[])
{
    printf("%s",a);
}
