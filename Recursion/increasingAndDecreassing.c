#include<stdio.h>

void print(int n)
{
    if(n==0)
    return;

    printf("%d\t",n);
    print(n-1);
    printf("%d\t",n);
    return;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    print(n);
    return 0;
}