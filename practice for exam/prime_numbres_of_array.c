#include<stdio.h>

void prime(int a[]);

int main()
{
    int k[9];
    prime(k);
    return 0;
}

void prime(int a[]){
    for(int i=0; i<=8; i++){
    printf("Enter elements no %d \n", (i+1));
    scanf("%d", &a[i]);
    }
    printf("All prime number of the array \n");
    for(int i=0; i<=8; i++){
    int b = 1;
        for(int j=2; j<=((a[i])/2); j++)
        if(a[i]%j == 0)
        b = 0;
        if(b)
        printf("%d ", a[i]);
    }
}