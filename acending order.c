#include<stdio.h>
int main()
{
    char a[26]="qwertyuioplkjhgfdsazxcvbnm";
    for(int i=0;a[i]!='\0';i++)
    {
        for(int j=i+1;a[j]!='\0';j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%s",a);
}
