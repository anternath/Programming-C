#include<stdio.h>
#include<limits.h>
int main(){
    long long int n,k;
    long long int sum=0;
    scanf("%lld %lld",&n,&k);
    long long int ary[n];
    for(int i=0; i<n; i++){
        scanf("%lld",&ary[i]);
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(ary[i]<ary[j]){
                long long int tem = ary[i];
                ary[i]=ary[j];
                ary[j]=tem;
            }
        }
    }
    for(int i=0; i<k; i++){
        sum= sum+ary[i];
    }
    printf("%lld",sum);
    return 0;
}