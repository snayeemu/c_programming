#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int array[15];
    array[0] = 1;
    for(int i = 1; i < 15; i++)
        array[i] = array[i - 1] * 2;
    
    for(int i = 0; i < 15; i++)
    printf("%d ", array[i]);
    return 0;
}