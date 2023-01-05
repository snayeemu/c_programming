#include<stdio.h>
int Add(int a, int b)
{
    return a+b;
}
void PrintHello(char *name)
{
    printf("Hello %s\n", name);
}
int main()
{   void (*ptr)(char *);
    ptr = PrintHello;
    ptr("Tom");
    
    return 0;
}