#include<stdio.h>
int main()
{
    char a[10]="kiran";
    //int *ptr=&a;
    int c,v,i;
    c=v=i=0;

    for(i=0;i<5;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            v++;
        }
        else
        {
            c++;
        }
    }
    printf("%d\n",v);
    printf("%d",c);
}
