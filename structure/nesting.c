/* creat a structure type 'book' with name , 
price and number of pages as its attributes */

#include<stdio.h>
#include<string.h>
int main(){
    typedef struct book{
        char name[50];
        float price;
        int pages;
    }book;

    typedef struct goodbook{
        book kitab;             // book structure ka pura variable good book me aa gya
        char author[20];
    }goodbook;

    goodbook read;
    strcpy(read.author,"balaguruswami");
    read.kitab.pages=300;
    read.kitab.price=700;

    printf("%s\n",read.author);
    printf("%d\n",read.kitab.pages);
    printf("%.2f\n",read.kitab.price);

    return 0;
}