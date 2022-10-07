#include<stdio.h>
char* msd(char []);
int main()
{
    char s[20];
    gets(s);
    char *p=msd(s);
    printf("%s",p);


}

char* msd(char s[])
{
    if(s[0]=='x')
    {
      return s+1;
    }
    else
        return s;
}
