#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ary[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ary[i]);
    }
    int pos;
    scanf("%d",&pos);
    for(int i=pos; i<n-1; i++){
        ary[i]=ary[i+1];
    }
    ary[n-1];
    for(int i=0; i<n-1; i++){
        printf("%d ",ary[i]);
    }
    return 0;
}