#include<stdio.h>
void fun(int *p){
    *p = 50;//dereferanceing 
    printf("x er address : %p\n",p);
}
int main(){
    int x=10;
    fun(&x);
    printf("%d",x);
    return 0;
}