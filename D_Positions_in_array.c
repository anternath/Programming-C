#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ary[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ary[i]);
        if(ary[i]<=10){
            printf("A[%d] = %d\n",i,ary[i]);
        }
    }
    return 0;
}