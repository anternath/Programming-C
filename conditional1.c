#include<stdio.h>
int main(){
    int x;
    printf("How much money do you hava?");
    scanf("%d",&x);
    if(x>=5000){
        if(x>=10000){
            printf("Saint martin jabo");
        }
        else if(x>=9000){
            printf("Saint martin jaite kicu take dhar korte hobe");
        }
        else{
            printf("Cox's bazar teke basai chole asbo");
        }
    
    }
    else printf("kothaw jabo na");
    return 0;
}