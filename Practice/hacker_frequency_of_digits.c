#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int j=0;
    char num[1000];
    gets(num);
    for(int i=0; i<=1000; i++){
    if(!(num[i]))
    break;
    }
    for(int i=0; i<=1000; i++){
        if(!(num[i]))
        break;
        if(num[i]=='0'){
            j=j+1;
        }
    }
        printf("%d ", j);
    
            j=0;
    for(int i=0; i<=1000; i++){

        if(!(num[i]))
        break;
        if(num[i]=='1'){
            j=j+1;
        }
    }
        printf("%d ", j);
            j=0;
    
    for(int i=0; i<=1000; i++){
        if(!(num[i]))
        break;
        if(num[i]=='2'){
            j=j+1;
        }
    }
        printf("%d ", j);
            j=0;
    
    for(int i=0; i<=1000; i++){
        if(!(num[i]))
        break;
        if(num[i]=='3'){
            j=j+1;
        }
    }
        printf("%d ", j);
            j=0;
    
    for(int i=0; i<=1000; i++){
        if(!(num[i]))
        break;
        if(num[i]=='4'){
            j=j+1;
        }
    }
        printf("%d ", j);
            j=0;
    
    for(int i=0; i<=1000; i++){
        if(!(num[i]))
        break;
        if(num[i]=='5'){
            j=j+1;
        }
    }
        printf("%d ", j);
            j=0;
    
    for(int i=0; i<=1000; i++){
        if(!(num[i]))
        break;
        if(num[i]=='6'){
            j=j+1;
        }
    }
        printf("%d ", j);
            j=0;
    
    for(int i=0; i<=1000; i++){
        if(!(num[i]))
        break;
        if(num[i]=='7'){
            j=j+1;
        }
    }
        printf("%d ", j);
            j=0;
    
    for(int i=0; i<=1000; i++){
        if(!(num[i]))
        break;
        if(num[i]=='8'){
            j=j+1;
        }
    }
        printf("%d ", j);
            j=0;
    
    for(int i=0; i<=1000; i++){
        if(!(num[i]))
        break;
        if(num[i]=='9'){
            j=j+1;
        }
    }
        printf("%d", j);
    
    return 0;
}
