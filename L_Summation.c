#include<stdio.h>
long long int fun(int ar[],int n ,int i){
    if(i==n) return 0;
    long long int ans= fun(ar,n,i+1);
    ans = ans+ar[i];
    return ans;
}
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    long long sum = fun(ar,n,0);
    printf("%lld",sum);
    return 0;
}