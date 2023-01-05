#include<stdio.h>

int factorial(int x);
int main()
{
    int y;
    printf("Enter a number \n");
    scanf("%d", &y);
    printf("Factorial of %d is %d\n", y, factorial(y));
    return 0;
}
int factorial(int x){
    if(x==1)
    return x;
    else return (x*factorial(x-1));
}