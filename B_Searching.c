#include<stdio.h>
int main(){
    int n,x;
    scanf("%d",&n);
    int ary[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ary[i]);
    }
    scanf("%d",&x);
    int ans = -1;
    for(int i=0; i<n; i++){
        if(ary[i]==x){
            printf("%d",i);
            break;
        }
        
    }
    return 0;
}