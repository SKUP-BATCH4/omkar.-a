#include<stdio.h>

int arbit(int mesg ,int a[],int b[]){
int idA=1;
int idB=2;
int x,z,n=0;

int v[20];
x=(3*pow(16,1))+(15*pow(16,0));

//printf(" Hexa to deci %d\n",x);
while(x>0){
        v[n]=x%2;
        x=x/2;
        n++;
}
printf("binary conversion is\n");
for(int g=20;g>=0;g--)
    printf("%d\t",b[g]);

/*

for(int i=0,j=0;i<strlen(a),j<strlen(b);i++,j++){
        if(a[i]!=b[j]){
            if(a[i]==0){
                return idA;
            }
            else{
                return idB;
            }
        }


}

*/
}
int main(){
int a[11];
int b[11];
int s=arbit(2,a,b);
printf("%d",s);
}
