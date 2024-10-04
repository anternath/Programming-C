#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ary[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ary[i]);
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
           if(ary[i]>ary[j]){
            int temp = ary[i];
            ary[i] = ary[j];
            ary[j]= temp;
           }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ",ary[i]);
    }
    return 0;
}