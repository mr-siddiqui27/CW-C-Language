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

    printf("\n\ntranspose matrix is :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            printf("%d ",mat[j][i]);
        printf("\n");    
    }
    return 0;        

}