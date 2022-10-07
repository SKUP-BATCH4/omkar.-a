#include<stdio.h>
int main()
{
    int *p=(int*)malloc(sizeof(int));
    int a=15;
    p=&a;
    free(p);
    printf("%d",*p);
}
