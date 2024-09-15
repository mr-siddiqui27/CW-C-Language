#include<stdio.h>
#include<string.h>
int main(){
    
    typedef struct date{
        int day;
        int month;
        int year;
    }date;
    date a,b;
    a.day=5;
    a.month=2;
    a.year=2004;

    b.day=5;
    b.month=2;
    b.year=2004;

    if(a.day==b.day && a.month==b.month && a.year==b.year)
        printf("date is equal");
    else
    printf("date is not equal");    
    return 0;
}