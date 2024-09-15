// #include<stdio.h>
// int main (){
//     int x , y;
//     printf("inter cost price : ");
//     scanf("%d",&x);
//     printf("inter selling price :");
//     scanf("%d",&y);
//     if((y-x)>0){
//         int p=y-x;
//         printf("the profit is : %d",p);
//     }
//     else{
//         int l=x-y;
//         printf("the loss is : %d",l);
//     }
//     return 0;
// }



#include<stdio.h>
int main (){
    int x , y;
    printf("inter cost price : ");
    scanf("%d",&x);
    printf("inter selling price :");
    scanf("%d",&y);
    if( y>x){
        int p=y-x;
        printf("the profit is : %d",p);
    }
    if(x>y){
         int l = x-y;
        printf("the loss is : %d ", l);
    }
    if(x==y){
        printf("no profit no loss");
        }
    
    return 0;
}