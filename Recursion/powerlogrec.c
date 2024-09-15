#include<stdio.h>

int power(int a,int b){
    if(b==0)   return 1;
    int p=power(a,b/2); 
    if (b%2==0)
        return p*p;
    else
        return p*p*a;    
}
int main(){
    int a,b;
    printf("enter base : ");
    scanf("%d ",&a);
    printf("enter power : ");
    scanf("%d ",&b);
    int pow=power(a,b);
    printf("ans=%d",pow);
    return 0;
}