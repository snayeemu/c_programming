#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numberOfTestCase;
    scanf("%d", &numberOfTestCase);
    for (int i = 0; i < numberOfTestCase; i++)
    {
        int maiden = 0;
        int inputs[6];
        for(int j = 0; j < 6; j++){
            scanf("%d", &inputs[j]);
            if (inputs[j] > 0)
                maiden = -1;
        }
        if(maiden == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}