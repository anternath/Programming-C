#include<stdio.h>
#include<string.h>
int main(){
    char ch[50];
    fgets(ch,11,stdin);//char array er khetre &ch use na korle o chole
    int count=0;
    for(int i=0; ch[i]!='\0'; i++){
        count ++;
    }
    int sl = strlen(ch);
    printf("rules 1 : %d\n",sl);
    // int i=0;
    // while(ch[i]!='\0'){
    //     count++;
    //     i++;
    // }
    printf("rules 2 : %d",count);
    return 0;
}