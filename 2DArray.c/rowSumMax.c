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
    int sum=0,max[m]; 
    for(int i=0;i<m;i++){   
        sum=0;
        for(int j=0;j<n;j++){
            sum += mat[i][j];
        }
        max[i]=sum;
    }

    int maximum=max[0],indxcount;
    for(int i=1;i<m;i++)
        if(maximum<max[i]){
            maximum=max[i];
            indxcount=i;
        }
            printf("row number is %d having maximum sum %d",indxcount,maximum);    

    return 0;
}