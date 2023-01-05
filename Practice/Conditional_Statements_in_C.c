#include<stdio.h>

int main()
{
    char* one_to_nine[10]={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    scanf("%d", &n);
    if(n>=1 && n<=9)
    {
        printf("%s", one_to_nine[n-1]);
    }
    else printf("Greater than 9");
    return 0;
}