#include<stdio.h>
void odd_even(){
    int n;
    scanf("%d",&n);
    int ary[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ary[i]);
    }
int even = 0;
int odd =0;
for(int j=0; j<n; j++){
    if(ary[j]%2==0){
        even++;
    }
    else{
        odd++;
    }
}
    printf("%d %d",even, odd);
}
int main(){
    
    odd_even();
    return 0;
}