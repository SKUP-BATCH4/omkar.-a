#include<stdio.h>
char* rev(char []);
int main()
{
    char s[20];
    printf("enter the string: ");
    gets(s);
    //rev(s);
    char *p=rev(s);
    printf("%s",p);


}

char* rev(char o[])
{
   static char a[20];
   int i;
   int x=strlen(o);
    for(i=x;i>=0;i--)
    {
        a[x-i]=o[i];

       // printf("%c",a[x-i]);
    }
    //printf("%s",a);
    //char *p=a;
    return a;
}


