#include<stdio.h>
#include<stdlib.h>

int main()
{
    int** array;

    array=malloc(sizeof(int*)*3);
    int i;
    for(i=0; i<3; i++)
    array[i]=malloc(sizeof(int)*3);

    for(i=0; i<3; i++)
    for(int j=0; j<3; j++)
    array[i][j]=55;

    printf("%d", array[2][2]);

    return 0;
}