#include<stdio.h>
int main(){
    int n,m,a;
    scanf("%d %d",&n,&m);
    a=n+m;
    int ary[n],ary1[m],ary2[a];
    for(int i=0; i<n; i++){
        scanf("%d",&ary[i]);
        
    }
    for(int i=0; i<m; i++){
        scanf("%d",&ary1[i]);
    }
    for(int i=0; i<n; i++){
        ary2[i]=ary[i];
    }
    int b=a-m;
    for(int i=0; i<m; i++){
        int c=b+i;
        ary2[c]=ary1[i];
    }
    for(int i=0; i<a; i++){
        printf("%d ",ary2[i]);
    }
    return 0;
}