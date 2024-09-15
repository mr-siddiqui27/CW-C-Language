#include<stdio.h>
#include<math.h>

void root(){
    int a ;
    printf("Enter a number: ");
    scanf("%d",&a);
    float root= sqrt(a);
    printf("%.2f  \n",root);
    return;
}

void power(){
    int q= pow(2,5);
    printf(" 2 the power 5 = %d",q);
    return;
}
int main(){
    root();
    power();
    return 0;
}