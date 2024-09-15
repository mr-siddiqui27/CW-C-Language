#include<stdio.h>
int main(){
    char str[]={'H','e','l','l','o'};
    for(int i=0;i<5;i++)
        printf("%c",str[i]);
    char ch = '\0';         // null charactor
    printf("%c",ch);         // print nhi hota hai

    printf("\n\n");

    char str1[]={'H','e','l','l','o','\0'};
    for(int i=0;str1[i]!='\0';i++)
        printf("%c",str1[i]);   


    printf("\n\n");
                        //   or
    
    int i=0;
    while(str1[i]!='\0'){
        printf("%c",str1[i]);
        i++;
    }    

    printf("\n\n");

    char arr[]="Hello\0";            //  agr \0 ko yaha nahi likhenge tab bhi same is tarah kam karega
    i=0;                                // arr[] ka size 5+1 =6 hai isme \0 bhi joda jaega
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }    

    printf("\n\n");

    char arr1[]="Hello";             // automatic \0 lag gya hai
    i=0;                                // yaha par bhi arr1[] ka size 6 hai isme bhi \0 ko add kiya jayega
    while(arr1[i]!='\0'){
        printf("%c",arr1[i]);
        i++;
    }    

    printf("\n\n");

    char st1[]="Hello"; 
    st1[1]=97;           // 97 means 'a' ab e ke jagah a    aa jayega 
    i=0;                                
    while(st1[i]!='\0'){
        printf("%c",st1[i]);
        i++;
    }   
    return 0;
}