#include<stdio.h>

int main()
{
    float a,b;
    char op;
    scanf("%f%c%f", &a, &op, &b);
    switch(op){
        case '+': 
        printf("%.2f\n", (a+b));
    break;
    case '-':
    printf("%.2f", (a-b));
    break;
    case '/':
    printf("%.2f", (a/b));
    break;
    case '*':
    printf("%.2f", (a*b));
    break;
    default:
    printf("Invalid operator.\n");
    }
    return 0;
}