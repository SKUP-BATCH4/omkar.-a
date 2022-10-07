#include<stdio.h>
int* fact(int);
int main()
{
    int a;
    scanf("%d",&a);
    int *p=fact(a);
    //printf("%d\n",&a);
    printf("%d",*p);

}
int* fact(int b)
{
    int f=1;
    for(int i=1;i<=b;i++)
    {
        f=f*i;
    }
    int *ptr=&f;
    return ptr;
}
