#include<stdio.h>
int count_before_one(int *ary, int n){
int count=0;
for(int j=0; j<n; j++){
    if(ary[j]!=1){
        count++;
    }
    else{
        break;
    }
    
}
return count;
}
int main(){
    int n;
    scanf("%d",&n);
    int ary[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ary[i]);
    }
    int count = count_before_one(ary,n);
    printf("%d",count);
    return 0;
}