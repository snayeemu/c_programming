#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int i, j=0;
    for(1; 1;1)
    {
        
        if(n%10!=0)
        {
            i=(n%10);
            j=j+i;
            n=n-i;
        }
        if(n%10==0)
        {
            n=n/10;
        }
        if(n<10)
        {
            j=j+n;
            n=n-n;
        }
        if(n==0)
        {
            break;
        }
    }
    printf("%d", j);
    return 0;
} 