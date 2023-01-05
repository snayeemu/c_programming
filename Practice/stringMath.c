#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){
    char operator[20];
    scanf("%s", &operator);

    int values[strlen(operator)];
    int number1, number2;
    scanf("%d%d", &number1, &number2);

    for(int i = 0; i < strlen(operator); i++){
        if(operator[i] == 42)
            values[i] = number1 * number2;
        else if(operator[i] == 43)
            values[i] = number1 + number2;
        else if(operator[i] == 45)
            values[i] = number1 - number2;
        else if(operator[i] == 47)
            values[i] = number1 / number2;
    }
    int addition = 0;
    for(int i = 0; i < strlen(operator); i++)
        addition += values[i];
    printf("%d", addition);


    return 0;
}