//find transpose mat in another mat

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
    int trans[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
           trans[i][j]=mat[j][i];    
    }
    printf("\n\ntranspose matrix is :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            printf("%d ",trans[i][j]);
        printf("\n");    
    }
    return 0;        

}