#include<stdio.h>

int main(){
    int i,n,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int a=n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
        {
            if(j<=a)                  //  matrix ke hidab se socho
                printf(" ");
            else
              printf("* ");
        }
        a--;
        printf("\n");
    }
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
        {
            if(i>j)                  //  matrix ke hidab se socho
              printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }
  

    return 0;
}