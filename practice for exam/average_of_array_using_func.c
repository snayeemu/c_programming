#include<stdio.h>

float avarage(int k[]);
int main()
{
    int arr[10];
    printf("Avarage is %.2f", avarage(arr));
    return 0;
}

float avarage(int k[]){
    float a=0.0;
    printf("Enter your ten numbers\n");
    for(int i=0; i<10; i++)
    scanf("%d", &k[i]);
    for(int i=0; i<10; i++){
        a=(a+k[i]);
    }
    a=a/10;
    return a;
}