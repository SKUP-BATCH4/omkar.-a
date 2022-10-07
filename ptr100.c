#include<stdio.h>
int a1(int p,int t,int r)
{
    return (p*t*r)/100;
}
int a2()
{
    int p,t,r;
    printf("\nenter the value:");
    scanf("%d%d%d",&p,&t,&r);
    return (p*t*r)/100;
}
void a3(int p,int t,int r)
{
    printf("\n%d",(p*t*r)/100);
}
void a4()
{
    int p,t,r;
    printf("\nenter the value:");
    scanf("%d%d%d",&p,&t,&r);
    printf("%d",(p*t*r)/100);
}
int main()
{
    int p,t,r;
    printf("enter the value:");
    scanf("%d%d%d",&p,&t,&r);
    printf("%d",a1(p,t,r));
    printf("%d",a2());
    a3(p,t,r);
    a4();
}



