#include<stdio.h>
#include<string.h>

int main()
{
    enum week{Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum week ajker_din;
    char ch[15];
    printf("Enter the name of today \n");
    gets(ch);
    if(strcmpi(ch, "Monday")==0)
    ajker_din=Monday;
    if(strcmpi(ch, "Tuesday")==0)
    ajker_din=Tuesday;
    if(strcmpi(ch, "Wednesday")==0)
    ajker_din=Wednesday;
    if(strcmpi(ch, "Thursday")==0)
    ajker_din=Thursday;
    if(strcmpi(ch, "Friday")==0)
    ajker_din=Friday;
    if(strcmpi(ch, "Saturday")==0)
    ajker_din=Saturday;
    if(strcmpi(ch, "Sunday")==0)
    ajker_din=Sunday;
    
    switch (ajker_din)
    {
    case Saturday:
        printf("Today is first day of week");
        break;
    case Sunday:
    printf("Today is second day of week");
    break;
    case Monday:
    printf("Today is third day of week");
    break;
    case Tuesday:
    printf("Today is fourth day of week");
    break;
    case Wednesday:
    printf("Today is fifth day of week");
    break;
    case Thursday:
    printf("Today is sixth day of week");
    break;
    case Friday:
    printf("Today is seventh day of week");
    break;
    
    }
    return 0;
}