#include<stdio.h>
void fun(int n){
    if(n==0) return;
    int num = n%10;
    fun(n/10);
    printf("%d ",num);
}
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1; i<=a; i++){
    int n;
    scanf("%d",&n);
    if(n!=0){
        fun(n);
    }
    else{
        printf("%d",n);
    }
    printf("\n");
    }
    
    return 0;
}