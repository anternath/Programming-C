#include<stdio.h>
void sorted(int *ary){
    if(ary[0]>ary[1]){
        int tem = ary[0];
        ary[0]=ary[1];
        ary[1]=tem;
    }
    if(ary[0]>ary[2]){
        int tem1 = ary[0];
        ary[0]=ary[2];
        ary[2]=tem1;
    }
    if(ary[1]>ary[2]){
        int tem2 = ary[1];
        ary[1]=ary[2];
        ary[2]=tem2;
    }
    for(int i=0; i<3; i++){
        printf("%d\n",ary[i]);
    }
    printf("\n");
    
}
int main(){
    int ary[3];
    for(int i=0; i<3; i++){
        scanf("%d",&ary[i]);
    }
    int a=ary[0], b= ary[1], c=ary[2];
    sorted(ary);
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    return 0;
}