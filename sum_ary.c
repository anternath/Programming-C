#include<stdio.h>
int main(){
    int n,a=0;
    scanf("%d",&n);
    int arry[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arry[i]);
    }
    for(int i=0; i<n; i++){
        a=a+arry[i];
    }
    printf("%d",a);
    return 0;
}