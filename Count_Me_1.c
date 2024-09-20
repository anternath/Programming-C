#include<stdio.h>
int main(){
    int a;
    int sum1 =0, sum2=0;
    scanf("%d",&a);
    int b[a];
    for(int i=0; i<a; i++){
        scanf("%d",&b[i]);
        if(b[i]%2==0){
            sum1++;
        }
        else if(b[i]%3==0){
            sum2++;
        }
    }
    printf("%d %d",sum1,sum2);
    return 0;
}