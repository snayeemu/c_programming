#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("Entetr the size of your array \n");
    int a[n];
    printf("Enter array elements \n");
    for(int i=0; i<n; i++)
    scanf("%d", &a[i]);
    printf("All the odd numbers of this array \n");
    for(int i=0; i<n; i++)
    if(a[i]%2==1)
    printf("%d  ", a[i]);
    printf("\nAll the even numbers of this array \n");
    for(int i=0; i<n; i++)
    if(a[i]%2==0)
    printf("%d  ", a[i]);

    return 0;
}