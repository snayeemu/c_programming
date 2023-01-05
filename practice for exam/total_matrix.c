#include<stdio.h>

int main()
{
    int x[2][4];
    int i, j, a=0;
    printf("Enter 8 numbers \n");
    for(i=0; i<2; i++)
    for(j=0; j<4; j++)
    scanf("%d", &x[i][j]);
    for(i=0; i<2; i++)
    for(j=0; j<4; j++)
    a=a+x[i][j];
    printf("Summetion of total matrix is %d \n", a);
    return 0;
}