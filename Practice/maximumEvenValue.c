#include<stdio.h>

int main(){
    int numberOfNumbers;
    scanf("%d", &numberOfNumbers);
    int number[numberOfNumbers];
    int maximumEven = 0, secondMaximumEven = 0, maximumOdd = 0, secondMaximumOdd = 0;
    for(int j = 0; j < numberOfNumbers; j++)
        scanf("%d", &number[j]);
    for(int j = 0; j < numberOfNumbers; j++)
        if (maximumEven < number[j] && number[j] % 2 == 0)
            maximumEven = number[j];
    for(int j = 0; j < numberOfNumbers; j++)
        if (secondMaximumEven < number[j] && number[j] < maximumEven && number[j] % 2 == 0)
            secondMaximumEven = number[j];
    for(int j = 0; j < numberOfNumbers; j++)
        if (maximumOdd < number[j] && number[j] % 2 == 1)
            maximumOdd = number[j];
    for(int j = 0; j < numberOfNumbers; j++)
        if (secondMaximumOdd < number[j] && number[j] < maximumOdd && number[j] % 2 == 1)
            secondMaximumOdd = number[j];
    if((maximumEven + secondMaximumEven) > (maximumOdd + secondMaximumOdd))
        printf("%d", (maximumEven + secondMaximumEven));
    else
        printf("%d", (maximumOdd + secondMaximumOdd));

    return 0;
}