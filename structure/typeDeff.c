#include<stdio.h>

typedef float realnumber;  // ab ham float ke ke jagah realnumber bhi use kar sakte hai
typedef int integer;

int main(){
    realnumber x = 23.521;
    integer y = 34;
    printf("%f\n",x);
    printf("%d\n",y);


    typedef struct book{
        char name[50];
        float price;
        int pages;
    }kitab;

    kitab ab;        // struck book kitab     nhi likjna padega
    ab.pages=150;
    printf("%d",ab.pages);

    return 0;
}