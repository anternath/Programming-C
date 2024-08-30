#include<stdio.h>
int main(){
    int n,a,b;
    scanf("%d",&n);
    int ary[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ary[i]);
    }
    scanf("%d %d",&a,&b);
    ary[a] = b;
    for(int i=n-1; i>=0; i--){
        printf("%d ",ary[i]);
    }
    return 0;
}