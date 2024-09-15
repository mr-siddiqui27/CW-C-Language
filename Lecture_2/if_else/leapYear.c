#include<stdio.h>
int main (){
    int n;
    printf("inter year");
    scanf("%d",&n); 
    if(n%4==0){                 // leap year 2000 2024 ........
    printf("leap year");
    }
    else{
    printf("not leap year");     
    }
    return 0;
} 