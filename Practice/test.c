#include<stdio.h>

int main()
{
    int n, i;
    for(n =1; n <= 5; n++)
    for(i = 1; i<n; i++)
    printf("%d%c", i, (i==n-1)? '\n' : ',');
    return 0;
}