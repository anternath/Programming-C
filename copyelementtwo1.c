#include<stdio.h>
int main(){
    int m,n,a;
    scanf("%d %d",&m,&n);
    a=m+n;
    int ary1[m],ary2[n],ary3[a];
    for(int i=0; i<m; i++){
        
        scanf("%d",&ary1[i]);
        ary3[i]=ary1[i];
    }
    int b=a-n;
    for(int i=0; i<n; i++){
       
        scanf("%d",&ary2[i]);
        int c=b+i;
        ary3[c]=ary2[i];

    }
    for(int i=0; i<a; i++){
        printf("%d ",ary3[i]);
    }
    return 0;
}