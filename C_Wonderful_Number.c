#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int n=num;
    int bnry[32];
    int i=0;
    int pali=0;
    while(num>0){
        bnry[i]=num%2;
        num = num/2;
        i++;
    }
    for(int j=0; j<i; j++){
        if(bnry[j]!=bnry[i-1]){
            pali++;
            break;
        }
        i--;
    }
    if(pali==0 && n%2!=0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}