// Question - take positive integer input and tell if it is a three digit number or not

//  99<n<1000  ---   n>99 and n<1000 
//  in code          n>99 &&   n<1000

#include<stdio.h>
int main (){
    int n;
    printf("inter a value");
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf("it is a three digit number ");
    }
    else{
        printf("it is not a three digit number");
    }

    return 0;
}