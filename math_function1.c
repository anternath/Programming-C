#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    //int s = pow(a,b); --there is a precision error.
    float s= pow(a,b);// a and b are double types er value.
    printf("%0.2f",s);
    return 0;
}