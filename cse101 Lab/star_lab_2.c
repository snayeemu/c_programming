#include<stdio.h>

int main()
{
    for(int i=0; i<=6; i+=2){
        for(int k=i; k<=8; k+=2)
        printf("  ");
        for(int j=0; j<=i; j++)
        printf("* ");
        printf("\n");
    }
    return 0;
}