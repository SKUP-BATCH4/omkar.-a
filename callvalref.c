#include<stdio.h>
int sum(int a, int b)
{
    printf("%d",a+b);

}
int sumptr(int *a, int *b)
{
    printf("%d",*a+*b);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    sum(a,b);// call by value
    printf("\n");// call by reference
    sumptr(&a,&b);
}

