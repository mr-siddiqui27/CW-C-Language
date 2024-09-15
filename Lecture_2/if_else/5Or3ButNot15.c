// //  Q - take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15

// #include<stdio.h>
// int main(){
//     int n ;
//     printf("inter the value");
//     scanf("%d",&n);
//     if(n%5==0 || n%3==0){   
//         if(n%15!=0){
//              printf("it is divisible by 5 or 3 but not 15");
//         } 
//         else{
//             printf("the number is divisible by 15");
//         }               
        
//     }
//     else{
//         printf("not follow the condition ");
//     }
//     return 0;

// }


//  Q - take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15

#include<stdio.h>
int main(){
    int n ;
    printf("inter the value");
    scanf("%d",&n);
        if((n%5==0 || n%3==0) && n%15!=0){   
            printf("it is divisible by 5 or 3 but not 15");
        
    }
    else{
        printf(" not follow the condition");
    }
    return 0;

}