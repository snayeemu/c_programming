#include<stdio.h>

int main()
{
    char c, language[100], welcome_to_c[100];
    scanf(" %c %s %[^\n]s", &c, &language, &welcome_to_c);
    printf("%c\n%s\n%s", c, language, welcome_to_c);
    return 0;
}