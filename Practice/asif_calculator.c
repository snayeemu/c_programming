#include<stdio.h>
#include<stdlib.h>

int main() {
    int check = 1;
    while (check)
    {
        int firstNumber, secondNumber;
        char operator;
        printf("Enter first number: ");
        scanf("%d", &firstNumber);
        printf("Enter second number: ");
        scanf("%d", &secondNumber);
        printf("Enter operator: ");
        fflush(stdin);
        operator = getchar();
        if (operator == "+")
            printf("%d", (firstNumber + secondNumber));
        else if (operator == "-")
            printf("%d", (firstNumber - secondNumber));
        else if (operator == "*")
            printf("%d", (firstNumber * secondNumber));
        else if (operator == "/")
            printf("%d", (firstNumber / secondNumber));
        else printf("Invalid operator.");
        printf("Enter 1 to continue or 0 to exit: ");
        scanf("%d", &check);
    }
    

    return 0;
}