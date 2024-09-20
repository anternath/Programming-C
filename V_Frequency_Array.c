#include<stdio.h>
int main(){
    int N,M;
    scanf("%d %d",&N,&M);
    int a[N];
    int count[M+1];
    for(int i=0; i<=M; i++){
        count[i]=0;
    }
    for(int i=0; i<N; i++){
        scanf("%d",&a[i]);
        count[a[i]]++;
    }
    for(int i=0; i<=M; i++){
        if(count[i]!=0){
            printf("%d\n",count[i]);
        }
    }

    return 0;
}