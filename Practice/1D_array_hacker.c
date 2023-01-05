#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, b=0;
    scanf("%d", &n);
    int a[n-1];
    for(int i=0; i<n; i++){
    scanf("%d", &a[i]);
    // for(int i=1; i<n; i++)
    b=b+a[i];
    }
    printf("%d ",b);
    return 0;
}