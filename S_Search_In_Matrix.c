#include<stdio.h>
int main(){
    int flag=0;
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int num;
    scanf("%d",&num);
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(a[i][j]==num){
                flag++;
                break;
            }
        }
    }
    if(flag==0){
        printf("will take number");
    }
    else{
        printf("will not take number");
    }
    return 0;
}