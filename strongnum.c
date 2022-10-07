#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int d=a;
    int l,b,c,s=0;
    while(a!=0)
    {
         l=a%10;
         b=fact(l);
 //       c=add(b);
         a=a/10;
         s=s+b;
}

    if(s==d)
        printf("strong num");
    else
        printf("NOT");
}

int fact(int v)
{
    if(v<=1)
        return 1;
    else
        return v*fact(v-1);
}

//int add(int g)
//{
//    int sum=0;
//    sum=sum+g;
//    return sum;
//}
