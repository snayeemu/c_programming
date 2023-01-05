#include<stdio.h>

int main()
{
    for(int i=1; i<=8; i+=2){
        for(int k=i; k<=6; k++)
        printf(" ");
        for(int j=1; j<=i; j++)
        printf("* ");
        printf("\n");
    }
    return 0;
}