#include<stdio.h>
#include<limits.h>
int main(){
    int n,a,b;
    scanf("%d",&n);
    int ary[n];
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        scanf("%d",&ary[i]);
        if(ary[i]<min){
            min = ary[i]; 
        }
        if(ary[i]>max){
            max = ary[i];
        }
    }
    for(int i=0; i<n; i++){
        if(max==ary[i]){
            a=i;
        }
        if(min==ary[i]){
            b=i;
        }
    }
    int tem = ary[a];
    ary[a]=ary[b];
    ary[b]=tem;
    for(int i=0; i<n;i++){
        printf("%d ",ary[i]);
    }
    return 0;
}