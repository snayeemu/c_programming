#include<stdio.h>
#include<string.h>

int main(){
    int numberOfTestCase, number;
    scanf("%d", &numberOfTestCase);
    for(int i = 0; i < numberOfTestCase; i++){
        int oneZeroCounter = 0, zeroOneCounter = 0;
        int k = 0, l = 1;
        scanf("%d", &number);
        char binary[number];
        scanf("%s", binary);
        while(l < number){
            if(binary[k] == 49 && binary[l] == 48)
                oneZeroCounter += 1;
            k += 1;
            l += 1;
        }
        k = 0, l = 1;
        while(l < number){
            if(binary[k] == 48 && binary[l] == 49)
                zeroOneCounter += 1;
            k += 1;
            l += 1;
        }
        printf("%d\n", oneZeroCounter + zeroOneCounter);
    }

    return 0;
}