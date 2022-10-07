#include<stdio.h>
struct abc
{
    char b;
    int a;
};
void main()
{
    struct abc v;

    struct abc *ptr=&v;

    scanf("%c%d",&ptr->b,&ptr->a);
    printf("%c %d",ptr->b,ptr->a);

}
