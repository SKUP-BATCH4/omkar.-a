#include<stdio.h>
int fact(int i)
{
    if(i<=1)
    {
        return 1;
    }
    return i*fact(i-1);
}
int main()
{
    int i=12;
    printf("Factorial of %d is %d",i,fact(i));
    return 0;
}
