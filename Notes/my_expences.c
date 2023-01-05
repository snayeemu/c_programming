#include<stdio.h>

int main()
{
    int final_collection, mess_vara, aunty_bill, current, wifi, coconut_oil, egg, shorisha, olive, 
    nut, honey, lemon, coffee, ghee, mill, mobile, monthly_collection,tour, hat, total;
    mill = 2000; 
    final_collection = 1000; //done
    mess_vara = 2300; //done
    aunty_bill = 400; //done
    current = 100;
    wifi = 135;//done
    coconut_oil = 1000; 
    egg = 8 * 4 * 22;
    shorisha = 200; 
    olive = 510; //done
    nut = 378; 
    honey = 421; 
    lemon = 50;
    coffee = 300;
    ghee = 540; 
    mobile = 250;
    monthly_collection = 150;
    tour=3000;
    hat=1000;
    total = mill +final_collection+ mess_vara+ aunty_bill+ current+ wifi+ coconut_oil+ egg
    + shorisha+ nut+ honey+ lemon+ coffee+ ghee + mobile + monthly_collection+tour+hat;
    int done=final_collection+mess_vara+aunty_bill+wifi+mobile+8*4*1;
    printf("My November expence should be %d \n", total);
    int total_2 = total- aunty_bill-mess_vara-olive;
    printf("Remaind expences %d \n", (total-done));
    return 0;
}