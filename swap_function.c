#include<stdio.h>
void swap_fun(int *a,int *b){
    int tem = *a;
    *a=*b;
    *b=tem;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    swap_fun(&a,&b);
    printf("%d %d",a,b);
    return 0;
}