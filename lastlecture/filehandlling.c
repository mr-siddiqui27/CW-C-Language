#include<stdio.h>
int main(){

    FILE* ptr= fopen("mhs.txt","r");        // pahle se bane file ko read kaene ke liye
    char str[100];
    while(fgets(str,100,ptr)!=NULL){
        printf("%s",str);
    }
    FILE* PTR= fopen("new.txt","w");       // new file banjayega isi folder me 
    // char STR[]="KAIF KUTTA HAI ,pilla bhi hai";           // AB is file me likh BHI SAKTE HAI
    char STR[100]; 
    printf("\nenter something in the file: ");
    gets(STR);          // yaha se input lekar kuchh bhi likh sakte hai
    fputs(STR,PTR);
    fclose(PTR);

    return 0;
}