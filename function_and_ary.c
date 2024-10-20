#include<stdio.h>
void fun(int *ary, int n){
    for(int i=0; i<n; i++){
        printf("%d ",ary[i]);
    }
         int sz = sizeof(ary)/sizeof(int);
         printf("%d",sz);
}
 // void fun1(int ary[], int n){
    // for(int i=0; i<n; i++){
    //     printf("%d ",ary[i]);
    // }
int main(){
    int ary[5]= {10,20,39,30,50};
    fun(ary,5);
    return 0;
}