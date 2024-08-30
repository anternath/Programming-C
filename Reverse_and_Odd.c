#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ary[n];
    for(int i=0; i<=n; i++){
        scanf("%d",&ary[i]);
    }
    for(int i=n-1; i>=0; i--){
        if(i%2!=0){
            printf("%d ",ary[i]);
        }
    }
    return 0;
}