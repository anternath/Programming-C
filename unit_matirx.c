#include<stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int n[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&n[i][j]);
        }
    }
    int flag=1;
    if(row!=col){
        flag=0;
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i==j){
                if(n[i][j]==1){
                continue;
            }
            }
            if(n[i][j]!=0){
                flag=0;
            }
        }
    }
    if(flag==1){
        printf("unit matrix");
    }
    else{
        printf("Not unit matrix");
    }
    return 0;
}