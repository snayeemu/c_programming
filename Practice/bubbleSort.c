#include<stdio.h>

int main(){
    int arr[] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19};
    int temp;
    for(int i = 0; i < 10; i++)
    for(int j = 0; j < 9; j++){
        if (arr[j + 1] < arr[j])
        {temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;}
    }
    for(int i = 0; i < 10; i++)
    printf("%d ", arr[i]);

    return 0;
}