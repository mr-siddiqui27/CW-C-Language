#include<stdio.h>
int main(){
    int m,n;
    printf("enter rows and column: ");
    scanf("%d%d",&m,&n);
    int mat[m][n];
    printf("enter elements of matrix\n");
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    scanf("%d",&mat[i][j]);

    int max=mat[0][0],min=mat[0][0];
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
        if(max<mat[i][j])
            max=mat[i][j];
        else if(min>mat[i][j])
            min=mat[i][j];
    printf("maix = %d\n",max);
    printf("min = %d",min);
    return 0;
}