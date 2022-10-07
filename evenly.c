#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a-b)==(b-c)||(b-a)==(c-b)||(a-b)==(c-a)||(a-c)==(c-b))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
