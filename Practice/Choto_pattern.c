#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=-n; i<=0; i++){
        for(int j=-n; j<i; j++)
        printf(" ");
        for(int j=i; j<0; j++)
        printf("*");
        int x=abs(i);
        printf("%d", x);
        for(int j=i; j<0; j++)
        printf("*");
        printf("\n");
    }
    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++)
        printf(" ");
        for(int j=1; j<=i;j++)
        printf("*");
        printf("%d", i);
        for(int j=1; j<=i;j++)
        printf("*");
        printf("\n");
    }
    return 0;
}