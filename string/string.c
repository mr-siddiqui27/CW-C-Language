#include<stdio.h>
#include<string.h>
int main(){
    char str[]="hello friends\n";  // is tarike me ham kisi indivisual charactor ko change kar sakte hai 
                                    // lekin pure string ko change nahi kar sakte
    printf("%s",str);
    // OR
    puts(str);

    // ham puts() ke andar jaise printf me likhte hai wiase bhi likh sakte hai 
    puts("Hi");   // yaha bhi "" ke andar likhna hoga  yahautomatic \n de deta hai



    // ab input lete hai
    printf("enter your input: ");
    char strr[40];
    // scanf("%s",strr);     // yaha sirf firt word hi input lega  agar main likhu : hello doston   to sirf hello ko hi input lega 
    scanf("%[^\n]s",strr);   // is tarike se pura sentence input ho skta hai  
    printf("your input was: %s\n",strr);
    char strrr[20];
    puts("enter your input");
    gets(strrr);
    puts(strrr);
                            

    return 0;
}