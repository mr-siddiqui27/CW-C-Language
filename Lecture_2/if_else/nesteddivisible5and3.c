//  Q -  take possitive integer input and tell me if it is divisible by 5 or 3

#include<stdio.h>
int main(){
    int n ;
    printf("inter the value");
    scanf("%d",&n);
    if(n%5==0){                                     // agar n 5 se divisible hoga to aage cod run karga and fir n 3 se divisible hoga to uske aage ru n karega
        if(n%3==0){                                 //
            printf("n is divisible by 5 and 3");
        }
        else{
            printf(" n is not divisible by 5 and 3");
        }
    }
     else{
            printf(" n is not divisible by 5 and 3");
        }
    return 0;
}