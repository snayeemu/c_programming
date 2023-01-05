#include<stdio.h>

int main()
{
    int a,b=0;
    scanf("%d", &a);
    int q=a;
    if(a>=10 && a<=99){
    while(a!=0){
        int r=(a%10);
        b=b+(r*r);
        a=a/10;
    }
    }
    else if(a>=100 && a<=999){
    while(a!=0) {
        int r=(a%10);
        b=b+(r*r*r);
        a=a/10;
    }
    }
    else if(a>=1000 && a<=9999){
    while(a!=0 ){
        int r=(a%10);
        b=b+(r*r*r*r);
        a=a/10;
    }
    }
    printf("After calculation the number is %d\n", b);
    if(b==q)
    printf("%d is Armstrong number\n", q);
    else printf("%d is not Armstrong number \n", q);
    return 0;
}