#include<stdio.h>
#include<limits.h>
int main(){
    int n,pos;
    scanf("%d",&n);
    int ary[n];
    int a=INT_MAX;
    for(int i=0; i<n; i++){
        scanf("%d",&ary[i]);
        if(ary[i]<a){
            a= ary[i];
            pos = i+1;
        }
    }
    printf("%d %d",a,pos);
    return 0;
}