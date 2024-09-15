//  Q -  take possitive integer input and tell me if it is divisible by 5 or 3

#include<stdio.h>
int main(){
    int n ;
    printf("inter the value");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){                   // || means or 
        printf("it is divisible by 5 or 3");
    }
    else{
        printf("it is not divisible by 5 or 3");
    }
    return 0;

}