#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ary[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ary[i]);
    }
    int i= 0;
    int j= n-1;
    while(i!=j||j>i){
        int tem = ary[i];
        ary[i]=ary[j];
        ary[j]=tem;
        i++;
        j--;
    }
    for(int i=0; i<n; i++){
        printf("%d ",ary[i]);
    }
    return 0;
}