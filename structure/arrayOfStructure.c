#include<stdio.h>
#include<string.h>

int main(){
    typedef struct books{
        char name[15];
        int page;
        int year;
    }science;

    science arr[3];     // arr[0], arr[1],arr[2],
 
    strcpy(arr[0].name,"arihant");
    arr[0].year=2022;
    arr[0].page=300;

    strcpy(arr[1].name,"balaguruswami");
    arr[1].year=2023;
    arr[1].page=250;

    strcpy(arr[2].name,"avatar");
    arr[2].year=2024;
    arr[2].page=350;

    for(int i=0;i<3;i++){
        printf("name : %s\n",arr[i].name);
        printf("year : %d\n",arr[i].year);
        printf("pages : %d\n\n",arr[i].page);
        
    }
    return 0;
}