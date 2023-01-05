#include<stdio.h>

int main()
{
    int a, b=0;
    printf("Enter a number \n");
    scanf("%d", &a);
    int c =a;
    if(a<=99 && a>=10){
    while(a>0){
        int r=(a%10);
        b=b+(r*r);
        a=a/10;
    }
    }
    if(a<=999 && a>=100){
    while(a>0){
        int r=(a%10);
        b=b+(r*r*r);
        a=a/10;
    }
    }
    if(a<=9999 && a>=1000){
    while(a>0){
        int r=(a%10);
        b=b+(r*r*r*r);
        a=a/10;
    }
    }
    if(a<=99999 && a>=10000){
    while(a>0){
        int r=(a%10);
        b=b+(r*r*r*r*r);
        a=a/10;
    }
    }
    if(b==c || c==0 || c==1)
    printf("%d is Armstrong\n", c);
    else printf("%d is not Armstrong \n", c);
    return 0;
}