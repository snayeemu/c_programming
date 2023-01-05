#include<stdio.h>

int main()
{
    int a =4, b = 8;
    int c;

    c = a & b;
    printf("a & b : %d \n", c); //0
    
    c = a | b;
    printf("a | b : %d \n", c); //12

    c = a<< 2;
    printf("a << 2 : %d \n", c); //16

    c = a >> 2;
    printf(" a >> 2 : %d \n", c); //1

    c = a ^ b;
    printf("a ^ x : %d \n", c); //12
    return 0;
}