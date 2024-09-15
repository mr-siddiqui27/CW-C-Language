// #include<stdio.h>
// int main(){
//     int n;
//     printf("inter the value :");
//     scanf("%d",&n);
//     if(n%2==0){                         // n%2 ka mtlb n ko 2 se bhag karne par sheshfal kitna aa raha h
//         printf("even number");         //if me agar () ke andar ka bat sach hai to {} ke andar ka jo bhi h wah run karega
//     }
//     if(n%2!=0){                         //  != ka mtlb not equal to   agar ( ) ke andar ka bat sahi hota hai to {} ke andar ka run karega
//         printf("odd number");

//     }
//     return 0;
// }

 
 #include<stdio.h>
int main(){
    int n;
    printf("inter the value :");
    scanf("%d",&n);
    if(n%2==0){                         // n%2 ka mtlb n ko 2 se bhag karne par sheshfal kitna aa raha h
        printf("even number");         //if me agar () ke andar ka bat sach hai to {} ke andar ka jo bhi h wah run karega
    }
    else{                               // else me  agar if wali baat galat hai to else wala run karega
        printf("odd number");
    }
    return 0;
}

 





