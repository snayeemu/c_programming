#include<stdio.h>

int main(){
    int number;
    scanf("%d", &number);
    for(int i = 1; i <= number; i++){
        printf("%d", i);
        if(i == number)
            printf("\n");
    }
    for(int i = 2; i < number; i++){
        printf("%d", i);
        for (int j = 1; j < number - 1; j++)
            printf(" ");
        printf("%d\n", number);
    }
    for(int i = 1; i <= number; i++)
        printf("%d", number);

    return 0;
}