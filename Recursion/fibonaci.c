#include<stdio.h>
                            // watch 01:40 for nderstand
int fabo(int n)
{
    if (n==1 || n==2)      // n=1 and n=2   1sr term and 2nd term    1 hota hai
    return 1;
    return fabo(n-1) + fabo(n-2);
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("%d",fabo(n));

    return 0;
}