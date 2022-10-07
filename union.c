#include<stdio.h>
union abc
{
    int a;
    float b;
    char c;
};
struct abcd
{
    int a;
    float b;
    char c;
};
void main()
{
    union abc u;
    struct abcd v;
    u.a=5;
    u.b=3.0;
    u.c='k';
    v.a=5;
    v.b=3.0;
    v.c='k';
    printf("%d\n%f\n%c\n\n%d\n%f\n%c\n",u.a,u.b,u.c,v.a,v.b,v.c);
    printf("\n%d\n%d",sizeof(union abc),sizeof(struct abcd));
}
