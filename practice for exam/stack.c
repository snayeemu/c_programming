#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push(int x);
int pop(void);
int *p, *tos, stack[5];
int main()
{
    int value;
    p=stack;
    tos=p;
    do
    {
        printf("Enter a number(-1 for quit, 0 for pop):");
        scanf("%d", &value);
        if(value!=0)
            push(value);
        else
            printf("This is it %d \n",pop());
    }
while(value!=-1);
return 0;
}
void push(int i)
{
    p++;
    if(p==(tos+5))
    {
        printf("stack overflow\n");
        exit(0);
    }
    *p=i;
}
int pop(void)
{
    if(p==tos)
    {
        printf("stack underflow\n");
        exit(0);
    }
    p--;
    return *(p+1);
}