#include<stdio.h>
int main(){
    int n;
    long long int sum=0;
    scanf("%d",&n);
    int arry[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arry[i]);
    }
    for(int i=0; i<n; i++){
        sum=sum+arry[i];
    }
   if(sum<0){
    sum *= -1;
   }
   printf("%lld",sum);
    return 0;
}