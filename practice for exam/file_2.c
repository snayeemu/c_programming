#include<stdio.h>

int main()
{
    FILE *a, *b;
    char ch[100];
    a=fopen("myfiel.txt", "a+");
    b=fopen("myfiel.txt", "a+");
    fprintf(a, "amar shonar bangla \n");
    printf("%s", fgets(ch, 100, b));
    fclose(a);
    fclose(b);
    return 0;
}   