#include<stdio.h>

int main()
{
    int i, j, k, b=3;
    for(i=1; i<8; i+=2)
    {
        
        for(k=15-b; k>0; k-=3)
        {
            printf("  ");
            
        }
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
        b+=3;
    }
    return 0;
}