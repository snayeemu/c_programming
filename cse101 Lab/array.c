#include<stdio.h>

int main()
{
    int arr[10]={10, 20,25, 15,30,35};
    int copy[5];
    int temp[5];
    int j=5;
    for(int i=0; i<6; i++)
    printf("%d ", arr[i]);
    printf("\n");
    for(int i=0; i<6; i++)
    copy[i]=arr[i];
    for(int i=0; i<6; i++){
    temp[i]=copy[i];
    }
    for(int i=0; i<6; i++){
        copy[i]=temp[j];
        j--;
    }
    for(int i=0; i<6; i++)
    printf("%d ", copy[i]);

    return 0;
}