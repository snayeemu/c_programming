#include<stdio.h>

int main()
{
    int a;
    printf("\nEnter a range up to which all prime numbers will be displayed: \n");
    scanf("%d", &a);
    printf("All prime numbers from 1 to %d \n", a);
    int b[a];
    for(int i=0; i<a; i++)
    b[i]=i+1;
    for(int i=0; i<a; i++){
        for(int j=2; j<=b[i]/2; j++)
        if((i+1)%j == 0)
        b[i] = 0;
        if(b[i])
        printf("%d ", b[i]);
    }
    return 0;
}