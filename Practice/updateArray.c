#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 10;
    int x = 5;
    int index = 0;
    int a[] = {12, 7, 3, 7, 2, 43, 38, 23, 45, 22};
    int b[n];
    for (int i = 0; i < n; i++){
        b[i] = a[i] + 1;
    }
    
    for (int i = 0; i < n; i++)
    printf("%d", b[i]);

    return 0;
}