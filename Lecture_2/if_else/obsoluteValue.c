//      question - take a integer input and print the absolute value of that integer


//      obsolute value means 8=8  , -8=8   ,-4=4 


#include<stdio.h>
int main (){
    int n;
    printf("inter the value;");
    scanf("%d",&n);
    if(n<0){
        n=n*(-1);
    }
    printf("the absolute value is %d : ",n);
    return 0;
}