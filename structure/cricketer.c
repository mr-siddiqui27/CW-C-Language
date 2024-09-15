#include<stdio.h>
#include<string.h>

int main(){
    typedef struct cricketer{
        char firstname[15];
        char lastname[15];
        int age;
        int nom;
        float avgmtch;
    }cricketer;
    
    cricketer arr[3];

    for(int i=0;i<2;i++){
        printf("enter first name of player : ");
        scanf("%s",arr[i].firstname);
        printf("enter lastname of player : ");
        scanf("%s",arr[i].lastname);            // %[^\n]s se input lene par sirf arr[0].name ka hi le raha hai
        printf("enter age of player : ");
        scanf("%d",&arr[i].age);
        printf("enter number of matches : ");
        scanf("%d",&arr[i].nom);
        printf("enter avarage runs : ");
        scanf("%f",&arr[i].avgmtch);
    }
    printf("\n");

    for(int i=0;i<2;i++){
        printf("name : %s %s\n",arr[i].firstname,arr[i].lastname);
        printf("age : %d\n",arr[i].age);
        printf("number of matches : %d\n",arr[i].nom);
        printf("average run : %f\n\n",arr[i].avgmtch);
    }


    return 0;
}