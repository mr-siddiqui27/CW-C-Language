#include<stdio.h>
int main()
{
    int a=5;
    int* x=&a;
    printf("%p\n",&a);
    printf("%p\n",x);
    printf("%p\n",&x);
    printf("%p\n",*&a);
    printf("%d\n\n\n",*x);


    int A=5;
    int* X=&A;
    int** y=&X;
    printf("%d\n",A);
    printf("%d\n",*X);
    printf("%d\n",**y);
    return 0;
}