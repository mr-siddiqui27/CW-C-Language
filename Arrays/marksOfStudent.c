// given an array of marks of 5 student , if the marks of any student is less than 35 print its roll number.
// (roll no here refer to the index of the array)

#include<stdio.h>

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("enter marks of student arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        if (arr[i]<35)
            printf("arr[%d]\t ",i);
    }
    return 0;
}