#include<stdio.h>
int main(){
    int n,sum1=0, sum2=0;
    scanf("%d",&n);
    int ary[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ary[i]);
        if(ary[i]>0){
           sum1 += ary[i];
        }
        else{
            sum2+=ary[i];
        }
    }
    printf("%d %d",sum1, sum2);
    return 0;
}