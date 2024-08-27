#include<stdio.h>
#include<limits.h>
int main(){
    int n,a;
    scanf("%d",&n);
    int min=INT_MAX;
    for(int i=1; i<=n; i++){
        scanf("%d ",&a);
        if(a<min){
            min=a;
        }
        
    }
    printf("%d",min);
    return 0;
}