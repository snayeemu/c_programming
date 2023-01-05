#include<stdio.h>

int main(){
    int number;
    scanf("%d", &number);
    char plusMinus[number];
    scanf("%s", plusMinus);
    int plusArray[number/2+2], minusArray[number/2+2];
    int j = 0, count = 0, arrayCounterPlus = 0;
    plusArray[0] = 0;
    while (j < number)
    {
        if(j == number-1 && plusMinus[j] == 43){
            count += 1;
            plusArray[arrayCounterPlus] = count;
            arrayCounterPlus += 1;
        }
        else if(plusMinus[j] == 43)
            count += 1;
        else{
            plusArray[arrayCounterPlus] = count;
            arrayCounterPlus += 1;
            count = 0;
        }
        j += 1;
    }
    count = 0;
    int arrayCounterMinus = 0;
    j = 0;
    minusArray[0] = 0;
    while (j < number)
    {
        if(j == number-1 && plusMinus[j] == 45){
            count += 1;
            minusArray[arrayCounterMinus] = count;
            arrayCounterMinus += 1;
        }
        else if(plusMinus[j] == 45)
            count += 1;
        else{
            minusArray[arrayCounterMinus] = count;
            arrayCounterMinus += 1;
            count = 0;
        }
        j += 1;
    }
    int maxMinus = minusArray[0];
    for(int i = 0; i < arrayCounterMinus; i++)
        if (maxMinus < minusArray[i])
            maxMinus = minusArray[i];
    int maxPlus = plusArray[0];
    for(int i = 0; i < arrayCounterPlus; i++)
        if (maxPlus < plusArray[i])
            maxPlus = plusArray[i];
    if (maxPlus > maxMinus)
        printf("%d", maxPlus);
    else
        printf("%d", maxMinus);
    

    return 0;
}