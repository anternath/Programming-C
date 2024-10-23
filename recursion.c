#include<stdio.h>
void fun(){
    printf("fun\n");
    fun();//recursion. 
}
int main(){
    fun();
    return 0;
}