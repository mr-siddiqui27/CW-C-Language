#include<stdio.h>

void print1(int n,int s)        // second method
{
    if(n==0){
     printf("%d\n",s);
     return;
    }
    print1(n-1,s+n);
    return;
}

int print(int n)   //first method
{
    if(n==0)
    return 0;
 
    return n+ print(n-1);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum= print(n);     // first method
    printf("%d\n",sum);

    print1(n,0);                    // second method
    return 0;
}