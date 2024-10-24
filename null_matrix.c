#include<stdio.h>
int main(){
    int n[2][3];
    int count=0;
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&n[i][j]);
            if(n[i][j]==0){
                count++;
            }
        }
        
    }
    int f=2*3;
    if(count==f){
        printf("Null matrix");
    }
    else{
        printf("not null matrix");
    }
    return 0;
}