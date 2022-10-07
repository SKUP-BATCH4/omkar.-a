#include<stdio.h>
unsigned int swap(unsigned int a)
{
    unsigned int even,odd;
    even=a&0xAAAAAAAA;
    odd=a&0x55555555;
    even>>=1;
    odd<<=1;
    return (even | odd);
}
void main()
{
    int a=64;
    printf("%d",swap(a));

}
