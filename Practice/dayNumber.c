#include<stdio.h>

int main()
{
    int day, month, year, feb;
    printf("Enter the date: ");
    scanf("%d%d%d", &day, &month, &year );
    if ( year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0))
    feb = 29;
    else feb = 28;
    if ( month == 1)
    printf("The number of the day %d", day );
    else if ( month == 2 )
    printf("The day is %d", 31 + day );
    else if ( month == 3 )
    printf("The day is %d", 31 + feb + day);
    else if ( month == 4 )
    printf("The day is %d", 62 + feb + day);
    else if ( month == 5 )
    printf("The day is %d", 92 + feb + day);
    else if ( month == 6 )
    printf("The day is %d", 31 + feb + day);
    else if ( month == 7 )
    printf("The day is %d", 153 + feb + day);
    else if ( month == 8 )
    printf("The day is %d", 184 + feb + day);
    else if ( month == 9 )
    printf("The day is %d", 31 + feb + day);
    else if ( month == 10 )
    printf("The day is %d", 245 + feb + day);
    else if ( month == 11 )
    printf("The day is %d", 275 + feb + day);
    else if ( month == 12 )
    printf("The day is %d", 306 + feb + day);

    return 0;
}