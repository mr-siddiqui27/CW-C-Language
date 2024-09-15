#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++)
    fact=fact*i;
    return fact;

}
int main(){
    int n,r;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("inter the  number of r: ");
    scanf("%d",&r);
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n-r);
    int ncr = nfact/(rfact*nrfact);      // ncr=  n!/(r!*(n-r)!)
    printf("%d",ncr);
    return 0;
}