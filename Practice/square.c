#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numberOfTestCase, numberOfInputs;
    scanf("%d", &numberOfTestCase);
    for (int i = 0; i < numberOfTestCase; i++)
    {
        int numberOfSquares = 0;
        scanf("%d", &numberOfInputs);
        int inputs[numberOfInputs];
        for(int j = 0; j < numberOfInputs; j++){
            scanf("%d", &inputs[j]);
            for(int k = 1; k <= floor(sqrt(inputs[j])); k++)
                if((k * k) == inputs[j])
                    numberOfSquares ++;
        }
        if(numberOfSquares == 0)
            printf("%d\n", -1);
        else
            printf("%d\n", numberOfSquares);
    }
    return 0;
}