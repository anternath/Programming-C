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
    int a= n[0][row-1];
    int flag=1;
    if(row!=col){
        flag=0;
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i+j==row-1){
                if(n[i][j]==a){
                continue;
            }
            }
            if(n[i][j]!=0){
                flag=0;
            }
        }
    }
    if(flag==1){
        printf("Secondary Scalar matrix");
    }
    else{
        printf("Not scalar matrix");
    }
    return 0;
}