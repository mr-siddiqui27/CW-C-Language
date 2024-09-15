#include<stdio.h>
int main(){
    int a,b; // a>b
    printf("inter the first value: ");
    scanf("%d",&a);
    printf("inter the second value: ");
    scanf("%d",&b);
    int r= a % b;
    printf("the remainder whe %d is divided by %d is : %d",a,b,r);
    return 0;  

}