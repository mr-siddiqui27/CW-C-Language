#include<stdio.h>
int main (){
    int l , b ;
    printf("inter the lenth :");
    scanf("%d",&l);
    printf("inter the breadth :");
    scanf("%d",&b);
    int a=l*b;
    int p=2*(l+b);
    if(a>p){
        printf("area is greater then perimeter");
    }
    else{
        printf(" area is not greater then perimeter");
    }
    
    return 0;
}