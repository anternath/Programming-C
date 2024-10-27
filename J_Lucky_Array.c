#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    int min = INT_MAX;
    scanf("%d",&n);
    int ary[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ary[i]);
        if(ary[i]<=min){
            min=ary[i];
        }
    }
    int count=0;
    for(int i=0; i<n; i++){
        if(ary[i]==min){
            count++;
        }
    }
    if(count%2==0){
        printf("Unlucky");
    }
    else{
        printf("Lucky");
    }

    return 0;
}