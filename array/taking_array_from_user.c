#include<stdio.h>

int main()
{
    int x;
    printf("Enter the size of your array \n");
    scanf("%d", &x);
    int k[x];
    printf("Enter numbers %d numbers \n", x);
    int i;
    for(i=0; i<x; i++)
    {
        scanf("%d", &k[i]);
    }
    printf("The array is \n [");
    for(i=0; i<x; i++)
    {
        printf("%d ", k[i]);
    }
    printf("]");
    return 0;
}