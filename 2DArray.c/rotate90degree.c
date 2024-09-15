#include<stdio.h>

void rotate90degree();     // my think   only square 
void rotate90();

int main(){
    rotate90();

    // rotate90degree();      // my think
    return 0;
}

void rotate90degree(){
    int n;
    printf("enter order of matrix: ");
    scanf("%d",&n);
    int mat[n][n];
    printf("enter elements of matrix\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)  
            scanf("%d",&mat[i][j]);

    int trans[n][n];
     for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            trans[i][(n-1)-j]=mat[j][i];
    printf("\nrotated matrix is:\n"); 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            printf("%d ",trans[i][j]);  
        printf("\n");                 
    }
}

void rotate90(){
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
    // int temp;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m/2;j++){
    //         temp=trans[i][j];
    //         trans[i][j]=trans[(m-1)-i][j];
    //         trans[(m-1)-i][j]=temp;
    //     }
    // }

    for(int i=0;i<n;i++){
        int j=0;
        int k=m-1;
        while(j<k){
            int temp = trans[i][j];
            trans[i][j] = trans[i][k];
            trans[i][k] = temp;
            j++;
            k--;
        }

    }

    printf("\n\nrotated matrix is :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            printf("%d ",trans[i][j]);
        printf("\n");    
    }


}