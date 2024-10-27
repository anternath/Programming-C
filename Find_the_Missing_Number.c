#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        long long int ary[4];
        for(int j=0; j<4; j++){
            scanf("%lld",&ary[j]);
        }
          
           if(ary[0]%(ary[1]*ary[2]*ary[3])==0){
             long long int k;
             k=ary[0]/(ary[1]*ary[2]*ary[3]);
             printf("%lld\n",k);
           }
           else{
            int f=-1;
            printf("%d\n",f);
           }
    }
    return 0;
}