#include<stdio.h>
int main(){
    int n[3][3];
    int count=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&n[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(n[i][j]!=0){
                if(n[i][j]==n[i][i]){
                    count++;
                }
                else if(n[i][j]!=n[i][i]){
                    count++;
                }
                else{
                    printf("Not Diagonal metrix");
                }
            }
        
        }
    }
    int f=3;
    if(count==3){
        printf("Diagonal matrix");
    }

    else{
        printf("Not diagonal matrix");
    }
    return 0;
}