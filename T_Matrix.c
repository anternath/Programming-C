#include<stdio.h>
int main(){
    int row;
    scanf("%d",&row);
    int a[row][row];
    int sd=0;
    int pd=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<row; j++){
            scanf("%d",&a[i][j]);
            if(i==j){
                pd=pd+ a[i][j];
            }
            if(i+j==row-1){
                sd= sd+a[i][j];
            }
        }
    }
    int result= pd-sd;
    printf("%d",abs(result));
    return 0;
}