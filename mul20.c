#include<stdio.h>
#include<stdbool.h>
bool mul20(int a)
{
    if(a%20==18||a%20==19)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    printf("%d",mul20(a));

}

