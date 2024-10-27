#include<stdio.h>
long long int fun(int n){
    if(n==0){
        return 1;
    }
    long long int ans= fun(n-1);
    ans= ans*n;
    return ans;
}
int main(){
    int n;
    scanf("%d",&n);
    long long int fact= fun(n);
    printf("%lld",fact);
    return 0;
}