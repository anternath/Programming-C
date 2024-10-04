#include<stdio.h>
#include<math.h>
int main(){
    int a= 5;
    int b=2;
    double num = 4.59;
    int convert = ceil(num);
    int convert1 = floor(num);
    int convert2 = round(num);
    int convert3 = sqrt(num);
    int convert4 = pow(a,b);
    // int convert2 = round(num);
    printf("%d\n",convert);
    printf("%d\n",convert1);
    printf("%d\n",convert2);
    printf("%d\n",convert3);
    printf("%d\n",convert4);
    return 0;
}