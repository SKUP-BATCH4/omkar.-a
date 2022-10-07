#include<stdio.h>
int sum(int);
int main()
{
    printf("%d",sum(10));
}
int sum(int k)
{
    if(k>0)
        return k+sum(k-1);
    else return 0;
}
