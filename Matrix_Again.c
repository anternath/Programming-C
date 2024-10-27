#include<stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int ary[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&ary[i][j]);
            if(i==row-1){
                printf("%d ",ary[i][j]);
            }
        }
    }
    printf("\n");
    for(int i=0; i<row; i++){
        printf("%d ",ary[i][col-1]);
    }
    return 0;
}