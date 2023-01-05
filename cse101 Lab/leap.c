#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if(a%400==0)
    printf("%d is Leap year \n", a);
    else if(a%100==0)
    printf("%d is not leap year \n", a);
    else if(a%4==0)
    printf("%d is Leap Year \n", a);
    else printf("%d is not leap year \n", a);
    return 0;
}