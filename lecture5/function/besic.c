#include<stdio.h>
void kaif(){            //9
    printf("hi kaif\n");    //10
    return;                 //11
}
void saif(){            //6
    printf("hi saif\n");   //7
    kaif();                //8
    return;                 //12
}
void raif(){           //3
    printf("hi raif\n");  //4
    saif();             //5
    return;             //13
}
int main(){  //1 pahle ye line read karega
    raif();  //2
    return 0; //14
}