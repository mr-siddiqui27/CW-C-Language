#include<stdio.h>
 
int main(){
    int m,n,p,q,r,s;
    printf("enter row and column of matrix A:\n");
    scanf("%d%d",&m,&n);
    printf("enter row and column of matrix B:\n");
    scanf("%d%d",&p,&q);
    int a[m][n],b[p][q],c[m][q];

    if(n!=p)
    printf("matrix can not multiply");
    else{
    printf("enter the elments of matrix A:\n");
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    
    printf("enter the elments of matrix B:\n");
    for(int i=0;i<p;i++)
    for(int j=0;j<q;j++)
        scanf("%d",&b[i][j]);

    for(int i=0;i<m;i++)
    for(int j=0;j<q;j++){
        c[i][j]=0;
        for(int k=0;k<n;k++)
        c[i][j] += a[i][k]*b[k][j];
    }
     

    for(int i=0;i<m;i++){
    for(int j=0;j<q;j++)
        printf("%d ",c[i][j]);

        printf("\n");
    }
    }
    return 0;
}