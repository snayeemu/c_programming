#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
      // Complete the code to print the pattern.
      for(int i=n; i>=1; i--){
          for(int k=n; k>i; k--)
          printf("%d ", k);
          for(int j=i; j>=1; j--)
            printf("%d ",i);
        for(int j=i; j>1; j--)
            printf("%d ", i);
            for(int j=i+1; j<=n; j++)
            printf("%d ", j);
            printf("\n");
        }
        for(int i=2; i<=n; i++){
          for(int j=n; j>i; j--)
          printf("%d ", j);
          for(int j=1; j<(i*2); j++)
          printf("%d ", i);
          for(int j=i+1; j<=n; j++)
          printf("%d ", j);
          printf("\n");
        }
      
      return 0;
}
/* 
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5 */