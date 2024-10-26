#include<stdio.h>
int fun(int ary[], int n){
    if(n==-1){
        return 0;
    }
    int sum;
    if(n==sizeof(ary)-1){
        int sum=0;
    }
    sum = sum + ary[n];
    fun(ary, n-1);
    printf("%d",sum);

}
int main(){
    int n;
    scanf("%d",&n);
    int ary[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ary[i]);
    }
    fun(ary,n-1);
    return 0;
}