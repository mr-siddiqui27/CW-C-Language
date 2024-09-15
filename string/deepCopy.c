#include<stdio.h>
#include<string.h>
int main(){
    char* s1="college wallah";
    char* s2;
    s2=s1;
    s2="physics wallah"; // sirf s2 me change hoga 
    printf("%s\n",s1);
    printf("%s",s2);
    return 0;
}