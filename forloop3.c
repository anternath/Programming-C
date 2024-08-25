#include<stdio.h>
int main(){
    int sum=1, num;
    printf("Enter any number:");
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
        sum = sum +i;
    }
    printf("The total number is : %d",sum);
    return 0;
}