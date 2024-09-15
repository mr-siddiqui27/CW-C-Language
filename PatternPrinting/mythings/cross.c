#include<stdio.h>


void cross()
{
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int b=n;
    int a=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if ( (j==a||j==b))
                printf("*");
            else
                printf(" ");    
        }
        a++;
        b--;
        printf("\n");
    }
}
int main(){
     cross();

    return 0;
}