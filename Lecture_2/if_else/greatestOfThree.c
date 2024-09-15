//  imp Question -  take three positive integer numbers and print the greatest of them\

#include<stdio.h>
int main(){
    int x,y,z;
    printf("inter the first number");
    scanf("%d",&x);
    printf("inter the decond number ");
    scanf("%d",&y);
    printf("inter the third number ");
    scanf("%d",&z);
    if(x>y && x>z){
        printf("the greates number is %d",x);
    }
    if(y>x && y>z){
        printf("the greates number is %d",y);
    }
    if(z>x && z>y){
        printf("the greates number is %d",z);
    }
    return 0; 
}