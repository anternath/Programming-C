#include<stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int ary[row][col];
    int test = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&ary[i][j]);
            if(i==j){
                if(ary[i][j]!=1){
                    test++;
                    break;
                }
                else{
                    continue;
                }
            }
            else if(i+j==row-1){
                if(ary[i][j]!=1){
                    test++;
                    break;
                }
                else{
                    continue;
                }
            }
            else{
                if(ary[i][j]!=0){
                    test++;
                    break;
                }
                else{
                    continue;
                }
            }
        }
    }
    if(test!=0){
        printf("NO\n");
    }
    else{
        printf("YES");
    }
    return 0;
}