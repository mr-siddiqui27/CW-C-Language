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

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if (i%2==0)
                printf("%d ",mat[i][j]);
            else
                printf("%d ",mat[i][(n-1)-j]);    
        }    
    }  

    
    return 0;
}