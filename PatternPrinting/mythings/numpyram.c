#include<stdio.h>
 int main(){
    int i,n,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
     
    for(i=1;i<=n;i++){
        int a=i-1;                  //  decrease karne ke liye
        for(j=1;j<=n-i;j++)      // for space let # is space  ###
        {                                                 //  ##          
        printf(" ");                                      //  #  
        }
        for(j=1;j<=i;j++)               //                   1
        {                                           //       12          dono ko add karne par ban raha h          
        printf("%d",j);                                //    123        
        }
        for(j=1;j<=i-1;j++){                            //    
             printf("%d",a);                            //    1
            a--;                                        //    21
        }                                               //    321
        
        printf("\n");
    }
    return 0;
}