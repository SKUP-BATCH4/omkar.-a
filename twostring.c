#include<stdio.h>
#include<string.h>
void revmodify(char[]);
void len(char[]);
void main()
{
    int s;
    char s1[]="Omkar amle";
    char s2[]="Rinky";
    s=sizeof(s1);
    len(s1);
    revmodify(s2);
}
void len(char s1[])
{

    printf("%d\n",strlen(s1));
}

void revmodify(char s2[])
{
    printf("%s",strrev(s2));
}

//void len(char s1[], int s)
//{
//    int c;
//    for(int i=0;s1[i]!='\0';i++)
//    {
//        c++;
//    }
//    printf("%d",c);
//
//}
