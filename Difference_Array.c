#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int a;
        scanf("%d",&a);
        int ar1[a],ar2[a],ar3[a];
        for(int j=0; j<a; j++){
            scanf("%d",&ar1[j]);
            ar2[j]=ar1[j];
        }
        for(int j=0; j<a-1; j++){
           for(int k=j+1; k<a; k++){
                if(ar2[j]>ar2[k]){
                    int tem= ar2[j];
                    ar2[j]=ar2[k];
                    ar2[k]=tem;
                }
           }
        }
        for(int j=0; j<a; j++){
            ar3[j]=ar1[j]-ar2[j];
            printf("%d ",abs(ar3[j]));
        }
        printf("\n");
        
    }
    return 0;
}