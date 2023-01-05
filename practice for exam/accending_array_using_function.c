#include<stdio.h>

void accending_array(int k[]);

int main()
{
    int i[9];
    for(int j=0; j<=8; j++)
    scanf("%d", &i[j]);
    printf("The elements of the array are \n");
    for(int j=0; j<=8; j++)
    printf("%d ", i[j]);
    printf("\nAfter accending the elements of the array are \n");
    accending_array(i);
    return 0;
}

void accending_array(int k[]){
    int temp;
    for(int i=0; i<=8; i++){
        for(int j=0; j<=8; j++){
            if(k[i]<k[j]){
                temp = k[i];
                k[i]=k[j];
                k[j]=temp;
            }
        }
    }
    for(int i=0; i<=8; i++)
    printf("%d ", k[i]);
}