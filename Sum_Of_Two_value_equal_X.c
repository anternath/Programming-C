#include<stdio.h>
int main(){
    int n,x;
    scanf("%d",&n);
    int ary[n];
    
    scanf("%d",&x);
    for(int i=0; i<n; i++){
        scanf("%d",&ary[i]);
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(ary[i]+ary[j]==x){
                printf("%d + %d = %d\n",ary[i],ary[j],x);
                printf("Yes");
                break;
            }
        }
        
    }
    return 0;
}