#include<stdio.h>
#include<limits.h>
int fun(int ar[],int n){
    if(n==-1) return INT_MIN;
    int max= fun(ar,n-1);
    if(ar[n]>max){
        return ar[n];
    }
    else{
        return max;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    int max= fun(ar,n-1);
    printf("%d",max);
    return 0;
}