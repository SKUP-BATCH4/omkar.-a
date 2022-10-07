#include<stdio.h>
void detail(vrt);
typedef struct virat{
    int a;
    char c;
    int b;

}vrt;

void main()
{
    vrt v;
    scanf("%d %c",&v.b,&v.c);
    detail(v);

}
void detail(vrt t)
{
    //scanf("%d %c",&t.a,&t.c);
    printf("YOUR SCORE Is %d AND GRADE Is %c",t.b,t.c);
}
