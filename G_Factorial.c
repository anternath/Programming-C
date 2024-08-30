#include<stdio.h>
int main(){
    int n,fact=1;
    scanf("%d",&n);
    int ary[n];
    for(int i=0; i<n; i++){
        scanf("%d\n",&ary[i]);
    }
    for(int i=0; i<n; i++){
           if(ary[i]!=1){
            for(int j=1; j<=ary[i]; j++){
            fact *= j;
           
           }
            printf("%d\n",fact);
            fact =1;
           }
           else if(ary[i]==0){
            printf("1\n");
           }
           else{
            printf("0\n");
           }
        }
    
    return 0;
}