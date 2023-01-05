#include<stdio.h>

int main()
{
    int a=1, b=8;
    int x;
    for(int i=1; i<=4; i++){
        printf("Enter guess number %d \n", i);
        scanf("%d", &x);
        if(x==a || x==b){
        printf("You win");
        break;
        }
        if(i==4)
        printf("Out of guess");
        }
    return 0;
}