#include<stdio.h>
// #include<conio.h>
#include<ctype.h>

int main()
{
    char ch;
    ch = getchar();
    switch (toupper(ch))
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    printf("Vowel");
    break;
    default:
    printf("Consonant");
    }
    return 0;
}