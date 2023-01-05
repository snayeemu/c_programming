#include<stdio.h>
#include<stdlib.h>

void rakho(int i);
int ber_koro(void);
int *p, *q;
int main()
{int stack[4], num;
    p=&stack[0];
    q=p;
    do{
        printf("Enter 0 to Pop, and -1 to exit\n");
        scanf("%d", &num);
        if(num!=0)
        rakho(num);
        else printf("\nThe number is %d\n\n", ber_koro());
    }
    while (num!=-1);
    
    return 0;
}

void rakho(int i){
    p++;
    if(p==(q+5)){
        printf("Stack over flow.");
        exit(0);
    }
    *p=i;
}

int ber_koro(void){
    if(p==q){
        printf("Stack under flow.");
        exit(0);
    }
    p--;
    return *(p+1);
}
