#include<stdio.h>

int main()
{
    int x;
    printf("Enter the size of your array: \n");
    scanf("%d", &x);
    int k[x];
    printf("Enter %d elements of your array: \n", x);
    int i;
    for(i=0; i<x; i++)
    {
        printf("Enter element %d : \n", (i+1));
        scanf("%d", &k[i]);
    }
    printf("Elements in array are: ");
        for(i=0; i<x; i++)
    {
        printf("%d ", k[i]);
    }
    return 0;
}