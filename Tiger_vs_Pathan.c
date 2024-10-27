#include<stdio.h>
#include<string.h>
int main(){
    int k;
    scanf("%d",&k);
    for(int i=1; i<=k; i++){
        int n;
        scanf("%d",&n);
    char a[100001];
    scanf("%s",&a);
    int p=0,t=0;
    int l=strlen(a);
    for(int i=0; i<l; i++){
        if(a[i]=='T'){
            t++;
        }
        else if(a[i]=='P'){
            p++;
        }
    }
    if(t>p){
        printf("Tiger\n");
    }
    else if(p>t){
        printf("Pathaan\n");
    }
    else if(t==p){
        printf("Draw\n");
    }
    }
    
    return 0;
}