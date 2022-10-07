#include<stdio.h>
int main()
{
    int a[3],i;
    int b[3],j;
    int c[3],k;
printf("enter the element of a:");
for (i=0;i<3;i++)
{
    scanf("%d",&a[i]);

}
for (i=0;i<3;i++)
{
    printf("the values of a are:%d\n",a[i]);
}
printf("enter the element of b:");
for (j=0;j<3;j++)
{
    scanf("%d",&b[j]);

}
for (j=0;j<3;j++)
{
    printf("the values of a are:%d\n",b[j]);
}
printf("enter the element of c:");
for (k=0;k<3;k++)
{
    scanf("%d",&c[k]);

}
for (k=0;k<3;k++)
{
    printf("the values of a are:%d\n",c[k]);
}

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if (a[i]==b[j+1]);
        {
            printf("the same number out of a&b are:%d\n",a[i]);
        }
    }
}

for(j=0;j<3;j++)
{
    for(k=0;k<3;k++)
    {
        if (b[j]==c[k+1]);
        {
            printf("the same number out of b&c are:%d\n",b[j]);
        }
    }
}
for(i=0;i<3;i++)
{
    for(k=0;k<3;k++)
    {
        if (c[k]==a[i+1]);
        {
            printf("the same number out of a&c are:%d",a[i]);
        }
    }
}
}
