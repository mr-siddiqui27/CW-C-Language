// Q - take three number input and tell if they can be the side of a trangle

  
#include<stdio.h>
int main(){
    int x,y,z;
    printf("inter the first number");
    scanf("%d",&x);
    printf("inter the decond number ");
    scanf("%d",&y);
    printf("inter the third number ");
    scanf("%d",&z);
    if((x+y)>z  && (y+z)>x && (x+z)>y ){
        printf( "they can be the side of a trangle");
    }
    else{
        printf("the can't be the side of a trangle");
    }
    return 0;
}