#include<stdio.h>
int main(){
   int ary[4];
   for(int i=0; i<4; i++){
    scanf("%d",&ary[i]);
}
    int k=ary[0]/(ary[1]*ary[2]*ary[3]);
    printf("%d",k);
    return 0;
}