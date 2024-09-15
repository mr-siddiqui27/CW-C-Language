#include<stdio.h>

void input();
int main(){
    int arr[5]={4,3,45,5,6};
    printf("%d\n",arr[0]);
    printf("%d\n\n",arr[3]);
    arr[3]=1;    //{4,3,45,1,6}
    arr[0]=9;    //{9,3,45,1,6}
    printf("%d\n",arr[0]);
    printf("%d\n",arr[3]);
    printf("%d\n",arr[4]);
    input();
    return 0;

}

void input(){
    int arr[5];
    for(int i=0;i<5;i++)
    {
        printf("enter element number-%d\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
        printf("%d\t",arr[i]);
}