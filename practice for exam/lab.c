#include<stdio.h>

int main()
{
    int i, array[10];
    printf("Enter 10 numbers\n");
    for(i=0; i<10; i++)
    scanf("%d", &array[i]);
    printf("\n\n All odd numbers are \n");
    for(i=0; i<10; i++)
    if(array[i]%2==1)
    printf("%d ", array[i]);
    printf("\n\nAll numbers of odd indies are \n");
    for(i=0; i<10; i++)
    if(i%2==1)
    printf("%d ", array[i]);
    printf("\n\nAll odd numbers of odd indies\n");
    for(i=0; i<10; i++)
    if(i%2==1 && array[i]%2==1)
    printf("%d ", array[i]);


    return 0;
}