#include<stdio.h>
#include<stdlib.h>

int main(){
    int numberOfStudents, lastIndexOfGirls;
    scanf("%d", &numberOfStudents);
    int rolls[numberOfStudents];
    int i = 0;
    for(i; i < numberOfStudents; i++){
        scanf("%d", &rolls[i]);
    }
    scanf("%d", &lastIndexOfGirls);
    i = 0;
    int j = numberOfStudents -1;
    for (j; j >= lastIndexOfGirls; j--){
        i = numberOfStudents - 2;
        int current = rolls[numberOfStudents - 1];
        for(i; i >= 0; i--)
        rolls[i + 1] = rolls[i];
        rolls[0] = current;
    }
    i = 0;
    for(i; i < numberOfStudents; i++)
    printf("%d ", rolls[i]);

    return 0;
}