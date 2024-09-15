#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++)
    fact=fact*i;
    return fact;

}

int combination(int n, int r){
int fact= factorial(n)/(factorial(r)*factorial(n-r));
return fact;

}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a=n;
    for(int i=0;i<=n;i++){
        for(int k=0;k<a;k++)
        printf(" ");
        for(int j=0;j<=i;j++){
            int pasc= combination(i,j);
            printf("%d ",pasc);
        }
        a--;
        printf("\n");
    }    
    
    return 0;
}