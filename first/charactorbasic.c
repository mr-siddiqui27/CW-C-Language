#include<stdio.h>
int main(){
    char ch= 'a';               // char - 'a' , 'b' ,     ........ 'A' , 'B' ...... '#' , '*' , '-' ,.... 
    printf("%c",ch);

    //ASCII Value
    // age %c ke jagah %d kar de to charactor ka ascii value aata h
    // eg - a , b , c ,.....= 97,98..........     A,B,........= 65,66,.......       #=35 , !=33
    printf("\n\n\n");
    char x= 'a';
    char y= 'A';
    printf("%d  %d ",x ,y);
    return 0;
}