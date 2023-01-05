#include<stdio.h>
#include<stdlib.h>

int main(){
    int numberOfPlayers, minRun, playersRun;
    scanf("%d %d", &numberOfPlayers, &minRun);
    int i = 0, playersToKick = 0;
    for (i; i < numberOfPlayers; i++){
        scanf("%d", &playersRun);
        if (playersRun < minRun)
        playersToKick++;
    }
    printf("%d", playersToKick);

    return 0;
}