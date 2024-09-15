#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter number %d: ",i+1);
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("sum = %d",sum);
    return 0;
}