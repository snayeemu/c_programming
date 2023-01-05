#include<stdio.h>

int main()
{
    int t, A, B;
    scanf("%d", &t);
    int a[t];
    for(int i=0;i<t; i++){
        scanf("%d%d", &A,&B);
        a[i]=(A+B);
        }
    for(int i=0;i<t; i++){
        printf("%d\n", a[i]);
    }

    return 0;
}