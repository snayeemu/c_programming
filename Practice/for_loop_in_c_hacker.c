#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
      char* array[10]={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
      
    for(a; a<=b; a++)
    {
        if(a<=9)
        {
        printf("%s\n", array[a-1]);
        }
        if(a>9 && a%2==0 && a<=b)
        {
            printf("even\n");
        }
        if(a>9 && a%2==1 && a<=b)
        {
            printf("odd\n");
        }
    }
    if(b<(a-1))  
    for(b; b<=a; b++)
    {
        if(a<=9)
        {
        printf("%s\n", array[b-1]);
        }
        if(b>9 && b%2==0)
        {
            printf("even\n");
        }
        if(b>9 && b%2==1)
        {
            printf("odd\n");
        }
    }
      
    return 0;
}

