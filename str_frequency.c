#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int cunt[7]={0};
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++){
       int val = a[i];
       cunt[val]++;
    }
    for(int i=0; i<7; i++){
        printf("%d = %d\n",i,cunt[i]);
    }
    return 0;
}