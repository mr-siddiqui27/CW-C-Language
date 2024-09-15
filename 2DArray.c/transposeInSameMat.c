//find transpose in same mat

#include<stdio.h>
int main(){
    int n;
    printf("enter order of matrix: ");
    scanf("%d",&n);
    int mat[n][n];
    printf("enter elements of matrix\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)  
            scanf("%d",&mat[i][j]);        
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){    //  or    ( 0  to  i  )       -    for only diagonal elements     
           temp=mat[i][j];
           mat[i][j]=mat[j][i];
           mat[j][i]=temp;    
            
        }   
             
    }
    printf("\ntranspose matrix is :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            printf("%d ",mat[i][j]);
        printf("\n");    
    }
    return 0;        

}