#include<stdio.h>

void average(int b, int k[]);

int main()
{
    int i;
    printf("Enter the size of your array \n");
    scanf("%d", &i);
    int a[i];
    average(i,a);
    return 0;
}

void average(int b,int  k[]){
    int temp = 0;
    printf("Enter the elements of the array \n");
    for(int i=0; i<=(b-1); i++)
    scanf("%d", &k[i]);
    for(int i=0; i<=(b-1); i++)
    temp=temp+k[i];
    float average = (float) temp/b;
    printf("Average is %.2f\n", average);

}