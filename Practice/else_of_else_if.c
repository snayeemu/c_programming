#include<stdio.h>

int main()
{
    int a , b , c , ans;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("Enter the value of b \n");
    scanf("%d", &b);
    printf("Enter the value of c \n");
    scanf("%d", &c);
    (a > b && a > c)?printf("a is greater."):(b>c && b>a)?printf("b is greater."):(c>b && c> a)?printf("c is greater."):printf("all the numbers are same or invalid input. \n");
    return 0;
}