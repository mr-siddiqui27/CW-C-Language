#include<stdio.h>
int main(){
    int n;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int arr[n],max;
    for (int i=0;i<n;i++){
        printf("enter number %d; ",i+1);
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(int i=0;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
            }
    }
    printf("maximum number is %d",max);
    return 0;
}