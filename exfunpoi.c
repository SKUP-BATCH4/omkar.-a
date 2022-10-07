#include<stdio.h>
char fun(char *p[])
{
    printf("%s",p);
}
int main()
{
    int s[100];
    gets(s);
    char *ptr=&s;
    printf("%d\n",ptr);
    fun(ptr);

}
