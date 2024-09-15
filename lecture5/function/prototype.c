#include<stdio.h>
int main(){
    void fun();    // isko likhne se fun niche hoga tab bhi chal jaega
    fun();
    return 0;
}
void fun(){
    printf("hello");
}