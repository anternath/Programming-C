#include<stdio.h>
int main(){
    int n[5][3];
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&n[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        printf("%d ",n[3][i]);
    }
    return 0;
}