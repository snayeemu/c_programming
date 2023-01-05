#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numberOfTestCase, numberOfInputs;
    scanf("%d", &numberOfTestCase);
    for (int i = 0; i < numberOfTestCase; i++)
    {
        scanf("%d", &numberOfInputs);
        int inputs[numberOfInputs];
        int defferenceFromCentury[numberOfInputs];
        for (int j = 0; j < numberOfInputs; j++)
        {
            scanf("%d", &inputs[j]);
            defferenceFromCentury[j] = 100 - inputs[j];
        }
        int leastDifference = defferenceFromCentury[0];
        int closeToCentury = inputs[0];
        for (int k = 0; k < numberOfInputs; k++)
            if (defferenceFromCentury[k] < leastDifference){
                leastDifference = defferenceFromCentury[k];
                closeToCentury = inputs[k];
            }
        printf("%d\n", closeToCentury);
               
    }
    return 0;
}