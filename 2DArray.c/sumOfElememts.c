/* find the sum of a given matrix of n*m  */
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
    int sum=0; 
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    sum += mat[i][j];

    printf("sum of the elements is %d ",sum);
    return 0;
}