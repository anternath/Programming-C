#include<stdio.h>
int main(){
    int a;
    long long int b;
    char c;
    float d;
    double e;
    scanf("%d",&a);
    scanf("%lld",&b);
    scanf("%c",&c);
    scanf("%f",&d);
    scanf("%lf",&e);
    printf("%d\n",a);
    printf("%lld\n",b);
    printf("%c\n",c);
    printf("%0.2f\n",d);
    printf("%0.1lf\n",e);
    return 0;
}