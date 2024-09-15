//  Q  H.W - take positive intiger input and tel me if it is divisible by 5 and 3 
// #include <stdio.h>
// int main(){
//     int n;
//     printf("inter the value ");
//     scanf("%d",&n);
//     if( n%15==0){                               // because jo 3 and 5 dono se divisible hoga wo 15 se bhi divisible hoga
//         printf("it is divisible by 5 and 3");
//     }
//     else{
//         printf("it is not divisible by 5 and 3");
//     }
//     return 0;
// }


#include <stdio.h>
int main(){
    int n;
    printf("inter the value ");
    scanf("%d",&n);
    if(n%5==0 && n%3==0){
        printf("it is divisible by 5 and 3");
    }
    else{
        printf("it is not divisible by 5 and 3");
    }
    return 0;
}