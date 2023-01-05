#include<stdio.h>

int main()
{
    int a,b;
    float x,y;
    scanf("%d %d %f %f", &a, &b, &x, &y);
    printf("%d ", a+b);
    if(a>b)
    {
        printf("%d\n",(a-b));
    }
    else printf("%d\n", (b-a));
    printf("%.1f ", (x+y));
    if(x>y)
    {
        printf("%.1f", (x-y));
    }
    else printf("%.1f", (y-x));
    return 0;
}