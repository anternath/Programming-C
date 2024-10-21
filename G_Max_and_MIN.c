#include<stdio.h>
#include<limits.h>
void maxi(int *ary, int n){
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(max<ary[i]){
            max = ary[i];
        }
    }
    printf("%d",max);
}
void mini(int *ary, int n){
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(min>ary[i]){
            min = ary[i];
        }
    }
    printf("%d ",min);
}
int main(){
    int n;
    scanf("%d",&n);
    int ary[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ary[i]);
    }
    mini(ary,n);
    maxi(ary,n);
    
    return 0;
}