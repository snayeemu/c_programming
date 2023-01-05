#include<stdio.h>

int summetion(int x);
int main()
{
    int y;
    printf("Enter a number\n");
    scanf("%d", &y);
    printf("Summesion of first %d number is %d", y, summetion(y));
    return 0;
}
int summetion(int x){
    if(x==0)
    return 0;
    else return (x+summetion(x-1));
}