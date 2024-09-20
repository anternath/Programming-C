#include<stdio.h>
int main(){
    int n,a;
    long long int b;
    int count=0;
    scanf("%d",&n);
    scanf("%d",&a);
    long long int in[a];
    for(int j=1; j<=n; j++){
        for(int i=0; i<a; i++){
        scanf("%lld",&in[i]);
    }
    scanf("%lld",&b);
    for(int i=0; i<a; i++){
        if(in[i]==b){
            count++;
            break;
        }
    }
    if(count>0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    printf("\n");
    count=0;
    }
    return 0;
}