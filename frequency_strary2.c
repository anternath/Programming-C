#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%s",&a);
    int cnt[26]= {0};
    for(int i=0; i<strlen(a); i++){
        int val = a[i]-97;
        cnt[val]++;
    }
    for(int i=0; i<strlen(a); i++){
        int val = a[i]-97;
        if(cnt[val]!=0){
            printf("%c = %d\n",val+97,cnt[val]);
        }
        cnt[val]=0;
    }
    
   
    return 0;
}