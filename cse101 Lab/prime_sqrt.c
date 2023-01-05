#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    int c=a;
    for(int i=2; i<=sqrt(a); i++)
    if(a%i==0){
    a=i;
    break;
    }
    if(a==c)
    printf("%d is a prime number", c);
    else printf("%d is not a prime number \n", c);
    return 0;
}