#include<stdio.h>
int main(){
    int i = 25;
    int x = i++;
    printf("%d\n",x);//print x=25
    x = i;
    printf("%d\n",x);//print x=26
    x =i--;
    printf("%d\n",x);//print x=26
    x=i;
    printf("%d\n",x);//print x=25
    x= --i;
    printf("%d\n",x);//print x= 24
    return 0;
}