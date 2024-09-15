#include<stdio.h>
#include<string.h>
int main(){
    typedef struct book{
        char name[50];
        float price;
        int pages;
    }kitab;

    kitab a,b;
    strcpy(a.name,"Balaguruswami");
    a.price=270;
    a.pages=130;
    
    b=a;            // b.price=a.price , b.pages=a.pages , strcpy(b.name,a.name)
                    // iske nuche agar a me koi change karenge to b me nahi hoga 
     
    printf("%d\n",b.pages);
    printf("%.2f",b.price);

    a.pages=300;

    printf("\n\n%d\n",a.pages);
    printf("%d\n",b.pages);


    return 0;
}