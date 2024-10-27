#include<stdio.h>
int main(){
    float a,b,ans;
    scanf("%f %f",&a,&b);
    a= 100-a;
    ans=(b*100)/a;
    printf("%0.2f",ans);
    return 0;
}