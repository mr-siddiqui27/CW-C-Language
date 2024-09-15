#include<stdio.h>
                            // only 1 and 2 steps are allowed
int steps(int n)
{
    if (n==1 || n==2)    
    return n;
    return steps(n-1) + steps(n-2);
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("%d",steps(n));

    return 0;
}



