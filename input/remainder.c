#include<stdio.h>
int main(){
    int a,b; // a>b
    printf("inter the first value: ");
    scanf("%d",&a);
    printf("inter the second value: ");
    scanf("%d",&b);
    int q=a/b;       // bhagfal = q
    int r= a-(b*q);  // divider*quadrant + remainder = dividerd
    printf("the remainder whe %d is divided by %d is : %d",a,b,r);
    return 0;  

}