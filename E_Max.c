#include<stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    int max =0;
    for(int i=1; i<=n; i++){
        scanf("%d ",&a);
        if(a>max){
            max=a;
        }
    }
    printf("%d",max);
    return 0;
}