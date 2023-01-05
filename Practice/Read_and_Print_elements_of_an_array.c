#include<stdio.h>

int main()
{
    int array[10];
    for(int j=0; j<=9; j++){
        printf("Enter element no %d \n", (j+1));
        scanf("%d", &array[j]);
    }
    printf("The elements of the array are \n ");
    for(int j = 0; j<=9; j++)
    printf("%d ", array[j]);
    return 0;
}