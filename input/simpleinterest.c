#include<stdio.h>
int main(){
    float p,r,t,si;
    printf("jnter the principle :");
    scanf("%f",&p);
    printf("inter rate :");
    scanf("%f",&r);
    printf("inter time :");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("the simple inerest is :%f",si);
    return 0;
}