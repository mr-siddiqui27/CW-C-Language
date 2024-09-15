#include<stdio.h>
#include<stdlib.h>
int main(){

    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int* ptr= (int*) malloc(n*sizeof(int));
    int* p=ptr;
    for(int i=0;i<n;i++){
        scanf("%d",&(*ptr));
        ptr++;
    }
        printf("%d\n\n",*p+2);        // third value print hoga
    for(int i=0;i<n;i++){
        printf("%d ",*p);
        p++;
    }
    return 0;
}