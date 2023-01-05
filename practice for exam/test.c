#include<stdio.h>

int main()
{
    FILE *a;
    char ch[100];
    a=fopen("fileName.txt", "r+");
    fprintf(a, "\namar shonar bangla\n");
    printf("%s", fgets(ch, 100, a));
    fclose(a);
    return 0;
}
