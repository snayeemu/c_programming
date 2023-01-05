#include<stdio.h>

int main()
{
    int a, b=0 ;
    scanf( "%d" , &a );
    int c = a;
    while ( a > 0 ) {
        int r = (a%10) ;
        b = ( b*10 ) + r;
        a = a/10 ;
    }
    printf ("after reverse the number is %d\n" , b ) ;
    if(b==c)
    printf("%d is Palindrome\n", b);
    else printf("%d is not palindrome \n", b);
    return 0 ;
}