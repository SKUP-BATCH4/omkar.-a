#include<stdio.h>
char* disp();
int main()
{
    char *s=disp();
     printf("%s\n",s);
    s[0]='f';
    printf("%s",s);
}

char* disp()
{
   static char str[]="hello";
    //char *p=&str;
    return str;
}
