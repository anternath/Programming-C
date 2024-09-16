#include<stdio.h>
#include<math.h>
int main(){
    int r;
    scanf("%d",&r);
    long double a= M_PI;
    double area = a*r*r;
    printf("%.9lf",area);
    return 0;
}