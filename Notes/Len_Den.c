#include <stdio.h>

int main()
{
    // January 2022
    int barshik_collection = 1000 , wifi = 135, vushi=60, recharge=45, bkash=793-45;
    int have=10890;
    int expend=barshik_collection+wifi+vushi;
    printf("Expend %d\n", expend);
    printf("Have %d\n", (have-expend));
    printf("With virtual %d", (have-expend+bkash));
    return 0;
}