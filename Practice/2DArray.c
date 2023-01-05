#include<stdio.h>
#include<stdlib.h>

int main(){
    int numberOfRows, numberOfColumns;
    scanf("%d%d", &numberOfRows, &numberOfColumns);
    int array[numberOfRows][numberOfColumns];
    for(int i = 1; i <= numberOfRows; i++)
        for (int j = 1; j <= numberOfColumns; j++)
        {
            scanf("%d", &array[i - 1][j - 1]);
            if (array[i - 1][j - 1] == i && array[i - 1][j - 1] == j)
                array[i - 1][j - 1] += 3;
            else if (array[i - 1][j - 1] == i)
                array[i - 1][j - 1] += 2;
            else if(array[i - 1][j - 1] == j)
                array[i - 1][j - 1] += 1;
            
        }

    for(int i = 0; i < numberOfRows; i++){
        for (int j = 0; j < numberOfColumns; j++)
            printf("%d ", array[i][j]);
            printf("\n");
            }
    
    return 0;
}