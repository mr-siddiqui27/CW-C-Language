#include<stdio.h>

int print(int n)
{
    if(n==0)
    return 0;

    printf("%d\t",n);
    print(n-1);
    return 0;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    print(n);
    return 0;
}