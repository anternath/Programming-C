#include<stdio.h>
void fun(int ary[], int n){
    if(n==-1) return;
    if(n==0){
        printf("%d ",ary[0]);
    }
    else if(n%2==0){
        printf("%d ",ary[n]);
    }
    fun(ary,n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    int ary[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ary[i]);
    }
    fun(ary,n-1);
    return 0;
}