#include<stdio.h>
void fun(int n){
    for(int i=1; i<=n; i++){
        if(i!=1){
            printf(" ");
        }
        printf("%d", i);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}