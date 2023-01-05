#include<stdio.h>

void ascending(int a[]);

int main()
{
    int k[9];
    ascending(k);
    return 0;
}

void ascending(int a[]){
    for(int i= 0; i<=9; i++){
        printf("Enter element no %d \n", (i+1));
        scanf("%d", &a[i]);
    }
    printf("After accending: \n");
    for(int i=0; i<=9; i++){
        for(int j=i+1; j<=9; j++)
        if(a[i]>a[j]){
            int temp = a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        printf("%d ", a[i]);
    }
}