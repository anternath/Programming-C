#include<stdio.h>
void fun(int n){
    if(n==6)return;
    fun(n+1);//first function call and after print value. it means reverse recursion
    printf("%d\n",n);//there are print reverse value 5 to 1
}
int main(){
    fun(1);
    return 0;
}