/* RAP to store roll number and marks obtained by 4 students side by side in a matrix  */
#include<stdio.h>

  void intputm(){
    int n;
    printf("enter number of students:  ");
    scanf("%d",&n);
    int mat[n][2];
    for(int i=0;i<n;i++){
        printf("enter roll number and marks of sutdent %d: ",i+1);
    for(int j=0;j<2;j++){
        scanf("%d",&mat[i][j]);
    }
    }
  }


int main(){
    int arr[4][2]={{5,80},{6,75},{7,79},{8,90}};     // roll number - 5   &   marks-80
      // arr[][2]={5,80,6,75,7,79,8,90};

    intputm();     
    return 0;
}