#include<stdio.h>
#include<math.h>
int main(){
    float a,b;
    scanf("%f %f",&a,&b);
    float i= floor(a/b);
    float j= ceil(a/b);
    float k= round(a/b);
    printf("floor %0.f / %0.f = %0.f\n",a,b,i);
    printf("ceil %0.f / %0.f = %0.f\n",a,b,j);
    printf("round %0.f / %0.f = %0.f\n",a,b,k);
    return 0;
}