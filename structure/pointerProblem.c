#include<stdio.h>
typedef int* int_pointer;
int main(){
    int x=5,y=6;
    // int* a=&x,b=&y;    //  int* a=&x and int b=&y 
    int_pointer a=&x,b=&y;
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
}
