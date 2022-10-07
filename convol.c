#include<stdio.h>
int main()
{
    char a[10]="kiran";
    char *ptr=&a;
    int c,v,i;
    c=v=0;
    for(i=0;i<5;i++)
    {
        if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u')
        {
            v++;
        }
        else
        {
            c++;
        }
        ptr++;
    }
    printf("%d\n",v);
    printf("%d",c);
}
