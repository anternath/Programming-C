#include<stdio.h>
void fun(int ary[],int n,int i){
    if(i==5)return;
    printf("%d\n",ary[i]);
    fun(ary,n,i+1);
}
int main(){
    int ary[5]={10,20,30,40,50};
    fun(ary,5,0);
    return 0;
}