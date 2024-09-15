/*  pass by refrance  */
#include<stdio.h>
void swap(int* x, int* y){
    int temp;
    temp=*x;    // temp = a
    *x=*y;      //  a=b
    *y=temp;    //  b=temp
    return;
}
int main(){
    int a,b;
    a=5;
    b=3;
    swap(&a, &b);
    printf("a= %d\n",a);
    printf("b= %d\n",b);

    return 0;
}