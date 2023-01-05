#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,c;
    float x,y,z;
    scanf("%d %d %f %f", &a, &b, &x, &y);
    if(a>b)
    c=(a-b);
    else c=(b-a);
    if(x>y)
    z=(x-y);
    else z=(y-x);
    printf("%d %d \n%.1f %.1f", (a+b), c, (x+y), z);
    
    return 0;
}