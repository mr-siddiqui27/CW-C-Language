#include<stdio.h>

int main(){
    int i,n,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int a=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=a;j++)
        printf("%d ",j);
        printf("\n");
        a++;
    }
    return 0;
}