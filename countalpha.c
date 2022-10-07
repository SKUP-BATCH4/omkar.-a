#include<stdio.h>
int main()
{
    char s[30];
    int a,d,sl,i;
    a=d=sl=i=0;
    gets(s);
    while(s[i]!=0)
    {
        if(s[i]>='a'&&s[i]<='z' || s[i]>='A'&&s[i]<='Z')
        {
            a++;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            d++;
        }
        else
        {
            sl++;
        }
        i++;
    }
    printf("%d\n",a);
    printf("%d\n",d);
    printf("%d",sl);
}
