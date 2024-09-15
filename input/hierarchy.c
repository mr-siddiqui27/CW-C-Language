#include<stdio.h>
int main(){
    int x = 2*3/4+4/4+8-2+5/8;    // agar * and / ek sath mile to left se right chalega - 6/4=1.5=1 because int ke wajah se 1.5 ke jagah 1 aayega
    printf("%d",x);



    //predict the output

    printf("\n\n\n");
    int i=2, j=3, k, l;
    float a,b; 
    k=i/j*j;
    l=j/i*i;
    a=i/j*j;
    b=j/i*i;
    printf("%d %d %f %f", k, l, a, b);
    return 0;
}