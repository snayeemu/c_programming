#include<stdio.h>

void passing_array(int k[]);

int main()
{
    int i[10];
    passing_array(i);
    return 0;
}

void passing_array(int k[]){
    for(int i=0; i<=10; i++){
    scanf("%d", &k[i]);
    }
    for(int i=0; i<=10; i++){
    printf("%d ", k[i]);
    }
}