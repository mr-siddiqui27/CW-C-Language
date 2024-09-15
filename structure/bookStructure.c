/* creat a structure type 'book' with name , 
price and number of pages as its attributes */

#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        float price;
        int pages;
    }a,b;
    a.pages=130;
    a.price=270;
     //a.name="balaguruswami";    // aisa nahi ho sakta because declearaiton ke bad string ko initialize nahi kar sakte
    strcpy(a.name,"Balaguruswami");

    printf("%d\n",a.pages);
    printf("%f\n",a.price);
    printf("%s\n",a.name);

    b.pages=200;
    strcpy(b.name,"Arihant");
    printf("%d\n",b.pages);
    printf("%s\n",b.name);
    return 0;
}