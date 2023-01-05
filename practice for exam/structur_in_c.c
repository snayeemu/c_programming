#include<stdio.h>

struct laptop{
    int id;
    char model[20];
    int price;
};
int main()
{
    struct laptop xps, ins;

    printf("Enter 1st laptop details\n");
    printf("Enter id\n");
    scanf("%d", &xps.id);
    printf("Enter model\n");
    fflush(stdin);
    gets(xps.model);
    printf("Enter price\n");
    scanf("%d", &xps.price);
    printf("Enter 2nd laptop details\n");
    printf("Enter id\n");
    scanf("%d", &ins.id);
    printf("Enter model\n");
    fflush(stdin);
    gets(ins.model);
    printf("Enter price\n");
    scanf("%d", &ins.price);
    printf("\n1st laptop = %d: %s: %d\n", xps.id, xps.model, xps.price);
    printf("\n2st laptop = %d: %s: %d\n", ins.id, ins.model, ins.price);

    return 0;
}