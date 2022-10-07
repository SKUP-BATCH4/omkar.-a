#include<stdio.h>
void main()
{
    int x=2,y=1;
    fun(x,y);
    printf("%d %d",x,y);
}
int fun(int x,int y)
{
    x=4,y=8;
    printf("%d %d\n",x,y);
}
