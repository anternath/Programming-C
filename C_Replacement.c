#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ary[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ary[i]);
       int a=ary[i];
       if(a>0){
        printf("1 ");
       }
       else if(a<0){
        printf("2 ");
       }
       else{
        printf("0 ");
       }
    }
    return 0;
}