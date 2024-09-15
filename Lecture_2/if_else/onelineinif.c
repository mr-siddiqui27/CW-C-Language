#include<stdio.h>
int main(){
    int n;
    printf("inter the value :");
    scanf("%d",&n);
    if(n%5==0) //{                              // agar {}me sirf ek hi line ho to {} nahi lagaye tab bhi chalega             
       // printf(" divisible by 5");         
    //}
        printf("divisible by 5");               //  {} nahi laga hai
    else{                                
        printf(" not divisible by 5 ");
    }
    return 0;
}
