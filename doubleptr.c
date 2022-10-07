#include<stdio.h>
int main()
{

    int a=10;

    int *ptr1=&a;
    int **ptr2=&ptr1;

    printf("Value of a is %d %d %d ",a,*ptr1,**ptr2);
    printf("Address of a is %x %x %x ",&a,ptr1,ptr2);
}

