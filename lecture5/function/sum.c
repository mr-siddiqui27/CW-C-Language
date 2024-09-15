#include<stdio.h>

int sum(int a, int b){
return a+b;
}
int main(){
    int a,b;
    a=2;
    b=3;
    int c = sum(a,b);
    printf("%d",c);
    return 0;
}