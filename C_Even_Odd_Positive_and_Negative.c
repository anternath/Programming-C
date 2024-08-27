#include<stdio.h>
int main(){
    int n,a,even=0,odd=0,posi=0,neg=0;
    scanf("%d\n",&n);
    for(int i=1; i<=n; i++){
        scanf("%d ",&a);
        if(a%2==0){
            even++;
        }
        else{
            odd++;
        }
        if(a>0){
            posi++;
        }
        else if(a<0){
            neg++;
        }
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",posi);
    printf("Negative: %d\n",neg);
    return 0;
}