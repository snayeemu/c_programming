#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int numberOfTestCase, number;
    scanf("%d", &numberOfTestCase);
    int  i = 0;
    for (i; i < numberOfTestCase; i++){
        scanf("%d", &number);
        int j = 2;
        int boolean = 1;
        for (j; j <= sqrt(number); j++){
            if (number % j == 0){
                boolean = 0;
                break;
            }
        }
        if (boolean && number != 1)
        printf("Yes\n");
        else
        printf("No\n");
    }

    return 0;
}