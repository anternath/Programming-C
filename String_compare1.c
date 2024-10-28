#include<stdio.h>
#include<string.h>
int main(){
    int n,m;
    int count=0;
    scanf("%d %d",&n,&m);
    char str[n][m];
    for(int i=0; i<n; i++){
        scanf("%s",&str[i]);
    }
    char st[20];
    scanf("%s",&st);
    for(int i=0; i<n; i++){
        for(int j=0; j<=strlen(str[i])-1; j++){
            if(str[i][j]==st[j]){
                count=0;
            }
            else{
                count=1;
                break;
            }
        }
        if(count==0){
            continue;
        }
        else{
            printf("%s ",str[i]);
        }
    }
    return 0;
}