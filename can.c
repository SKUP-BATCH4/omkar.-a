#include<stdio.h>
int* arb(int[],int[]);
int main()
{
    int ar[12]={0,1,1,1,1,1,1,1,1,1,1};
    int arr[12]={0,0,0,1,1,1,1,1,1,1,1};
    int *s;
    s=arb(ar,arr);
    printf("%d",s);

}

int *arb(int ar[],int arr[])
{
            int i;

            if(ar[i]<arr[i])
            {
                printf("message id won the arbitration\n");
            }
            else{
                printf("did not won the arbitration\n");
            }

      // printf("%d\n",arr[i]);
}
